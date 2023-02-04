#include "widget.h"
#include "./ui_widget.h"
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
    //QMessageBox::information(this, "Message", "You clicked!", QMessageBox::Ok);

    //QMessageBox::information(this, "Message", QAudioDevice::defaultAudioInput(), QMessageBox::Ok);

}
