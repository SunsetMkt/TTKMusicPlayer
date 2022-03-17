/***************************************************************************
 * This file is part of the TTK qmmp plugin project
 * Copyright (C) 2015 - 2022 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#ifndef OUTERBLURWAVE_H
#define OUTERBLURWAVE_H

#include <qmmp/visual.h>

class QGraphicsView;
class QGraphicsPolygonItem;

/*!
 * @author Greedysky <greedysky@163.com>
 */
class OuterBlurWave : public Visual
{
    Q_OBJECT
public:
    explicit OuterBlurWave(QWidget *parent = nullptr);
    virtual ~OuterBlurWave();

public slots:
    virtual void start() override final;
    virtual void stop() override final;

private slots:
    void readSettings();

private:
    virtual void paintEvent(QPaintEvent *e) override final;
    virtual void resizeEvent(QResizeEvent *e) override final;

    virtual void process(float *left, float *right) override final;
    void draw(QPainter *p);

    QPointF viewToItemPoint(const QPoint &pt);

    QColor m_color = QColor(0x0, 0xff, 0xff);
    qreal m_opacity = 1.0;
    double m_analyzer_falloff = 1.2;
    int *m_x_scale = nullptr;

    QSize m_cell_size = QSize(6, 2);
    QGraphicsView *m_graphics_view;
    QGraphicsPolygonItem *m_graphics_item;

};

#endif