#include "mainwindow.h"

#include <QApplication>

#include "C_RF_Calc.h"
#include "Get_Value.h"
#include "Init_ComboBox.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
