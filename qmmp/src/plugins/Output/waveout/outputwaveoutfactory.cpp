#include "outputwaveout.h"
#include "outputwaveoutfactory.h"

OutputProperties OutputWaveOutFactory::properties() const
{
    OutputProperties properties;
    properties.name = tr("WaveOut Plugin");
    properties.shortName = "waveout";
    return properties;
}

Output *OutputWaveOutFactory::create()
{
    return new OutputWaveOut();
}

Volume *OutputWaveOutFactory::createVolume()
{
    VolumeWaveOut *vol = new VolumeWaveOut();
    if(!vol->isSupported())
    {
        qDebug("OutputWaveOutFactory: device doesn't support volume control");
        delete vol;
        return nullptr;
    }
    return vol;
}

void OutputWaveOutFactory::showSettings(QWidget *parent)
{
    Q_UNUSED(parent);
}

#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
#include <QtPlugin>
Q_EXPORT_PLUGIN2(waveout, OutputWaveOutFactory)
#endif