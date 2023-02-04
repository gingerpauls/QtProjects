//#include "widget.h"

#include <QApplication>
#include <QMediaDevices>
#include <QAudioDevice>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qInfo() << "Audio Inputs:";
    const auto audioDeviceInputs = QMediaDevices::audioInputs();
    for (const QAudioDevice &audioDeviceInputs : audioDeviceInputs)
        qDebug() << "Device: " << audioDeviceInputs.description();
    qInfo() << "Audio Outputs:";
    const auto audioDeviceOutputs = QMediaDevices::audioOutputs();
    for (const QAudioDevice &audioDeviceOutputs : audioDeviceOutputs)
        qDebug() << "Device: " << audioDeviceOutputs.description();
\
    qDebug() << "";
    const auto defaultAudioInput = QMediaDevices::defaultAudioInput();
    qDebug() << "Default Audio Input: " << defaultAudioInput.description();

    const auto defaultAudioOutput = QMediaDevices::defaultAudioOutput();
    qDebug() << "Default Audio Output: " << defaultAudioOutput.description();




//    Widget w;
//    w.show();
    return a.exec();
}
