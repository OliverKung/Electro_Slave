#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <stdio.h>
#include <QStringList>

#include "C_RF_Calc.h"
#include "Get_Value.h"
#include "Init_ComboBox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init()
{
    InitFrequencyBox(ui->InductorFrequencyComboBox);
    InitFrequencyBox(ui->CapcitanceFrequencyComboBox);
    InitInductanceBox(ui->InductorComboBox);
    InitCapcitanceBox(ui->CapcitanceComboBox);
}

void MainWindow::on_InductorCalcpushButton_clicked()
{
    double Freq=0,Inductor=0;
    Freq=GetFrequency(ui->InductorFrequencyEdit,ui->InductorFrequencyComboBox);
    Inductor=GetInductance(ui->InductorInductanceEdit,ui->InductorComboBox);
    QString Buffer=0;
    Buffer.setNum(inductance_Calc(Inductor,Freq));
    ui->InductanceOutput->setText(Buffer);
}


void MainWindow::on_CapcitanceCalcpushButton_clicked()
{
    double Freq=0,Capcitor=0;
    Freq=GetFrequency(ui->CapcitorFrequencyEdit,ui->CapcitanceFrequencyComboBox);
    Capcitor=GetCapcitance(ui->CapcitorCapcitanceEdit,ui->CapcitanceComboBox);
    QString Buffer=0;
    Buffer.setNum(capcitance_Calc(Capcitor,Freq));
    ui->CapcitanceOutput->setText(Buffer);

}
