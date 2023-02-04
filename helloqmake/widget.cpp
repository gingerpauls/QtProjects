#include "widget.h"
#include "ui_widget.h"
#include <QAudioDevice>
#include <QMessageBox>
#include <QMediaDevices>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    qDebug() << "You clicked!";
    //QMediaDevices availableDevices;
//    const auto deviceInfos = QMediaDevices::availableDevices(QAudioDevice::Output);
//    for (const QAudioDevice &deviceInfo : deviceInfos)
//        qDebug() << "Device: " << deviceInfo.description();
    QMessageBox::information(this, "Message", "You clicked!",QMessageBox::Ok);
}
