#include <iostream>
#include <QCoreApplication>

int main(int argc, char *argv[ ]){
    QCoreApplication a(argc,argv);
    std::cout << "sucesso";
    return a.exec();
}