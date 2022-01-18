#include <QCoreApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString dirPath="D:/";
    QStringList nameFilters;
    nameFilters<<"*jpg";

    QDir dir(dirPath);
    qDebug()<<"jpeg files found: "
            <<dir.entryInfoList(nameFilters,QDir::Files).size();
    return a.exec();
    return a.exec();
}
