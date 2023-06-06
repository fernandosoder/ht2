#include <iostream>
#include <QCoreApplication>
#include <QDebug>
using namespace std;

int main(int argc, char *argv[ ]){
    QCoreApplication a(argc,argv);
    qDebug() << "sucesso";
    return a.exec();
}