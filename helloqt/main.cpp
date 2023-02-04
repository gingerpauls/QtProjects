#include <QCoreApplication>
#include <iostream>
#include <QMediaDevices>



void do_cpp(){
    std::string name;
    std::cout << "Enter name: ";
    std::getline(std::cin,name);
    std::cout << "Hello" << name << "\n";
}

void do_qt(){
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Enter name: ";
    qout.flush();
    QString name = qin.readLine();
    qout << "Hello" << name << "\n";
    qout.flush();
}

void do_mixed(){
    QTextStream qin(stdin);
    qInfo() << "enter name: ";
    QString name = qin.readLine();
    qInfo() << "Hello" << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    do_qt();
//    do_cpp();
    //do_mixed();






    return a.exec();
}
