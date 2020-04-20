#include "mainwindow.h"
#include "ui_mainwindow.h"

void InitInductanceBox(QComboBox *InductanceBox)
{
    QString Buffer="nH";
    InductanceBox->addItem(Buffer);
    Buffer="uH";
    InductanceBox->addItem(Buffer);
    Buffer="mH";
    InductanceBox->addItem(Buffer);
    Buffer="H";
    InductanceBox->addItem(Buffer);
}
void InitCapcitanceBox(QComboBox *CapcitanceBox)
{
    QString Buffer="pF";
    CapcitanceBox->addItem(Buffer);
    Buffer="nF";
    CapcitanceBox->addItem(Buffer);
    Buffer="uF";
    CapcitanceBox->addItem(Buffer);
    Buffer="mF";
    CapcitanceBox->addItem(Buffer);
}
void InitFrequencyBox(QComboBox *FrequencyBox)
{
    QString Buffer="Hz";
    FrequencyBox->addItem(Buffer);
    Buffer="kHz";
    FrequencyBox->addItem(Buffer);
    Buffer="MHz";
    FrequencyBox->addItem(Buffer);
}
