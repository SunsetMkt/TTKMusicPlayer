/* =================================================
 * This file is part of the TTK qmmp plugin project
 * Copyright (C) 2015 - 2021 Greedysky Studio

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
 ================================================= */

#ifndef XSFREADER_H
#define XSFREADER_H

#include <QString>

#include <libxsf/file2sf.h>
#include <libxsf/filegsf.h>
#include <libxsf/fileusf.h>
#include <libxsf/filencsf.h>
#include <libxsf/filesnsf.h>

/*!
 * @author Greedysky <greedysky@163.com>
 */
namespace XSFReader
{
    FileReader *makeReader(const QString &path);
}

#endif