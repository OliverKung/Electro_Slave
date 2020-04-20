#include "Get_Value.h"

double GetInductance(QLineEdit *InductanceLineEdit,QComboBox *InductanceBox)
{
    if(InductanceBox->currentText()=="nH")
        return InductanceLineEdit->text().toDouble()*1e-9;
    if(InductanceBox->currentText()=="uH")
        return InductanceLineEdit->text().toDouble()*1e-6;
    if(InductanceBox->currentText()=="mH")
        return InductanceLineEdit->text().toDouble()*1e-3;
    if(InductanceBox->currentText()=="H")
        return InductanceLineEdit->text().toDouble();
    return ERROR;
}
double GetCapcitance(QLineEdit *InductanceLineEdit,QComboBox *CapcitanceBox)
{
    if(CapcitanceBox->currentText()=="pF")
        return InductanceLineEdit->text().toDouble()*1e-12;
    if(CapcitanceBox->currentText()=="nF")
        return InductanceLineEdit->text().toDouble()*1e-9;
    if(CapcitanceBox->currentText()=="uF")
        return InductanceLineEdit->text().toDouble()*1e-6;
    if(CapcitanceBox->currentText()=="mF")
        return InductanceLineEdit->text().toDouble()*1e-3;
    return ERROR;
}
double GetFrequency(QLineEdit *FrequencyLineEdit,QComboBox *FrequencyBox)
{
    if(FrequencyBox->currentText()=="Hz")
        return FrequencyLineEdit->text().toDouble();
    if(FrequencyBox->currentText()=="kHz")
        return FrequencyLineEdit->text().toDouble()*1e3;
    if(FrequencyBox->currentText()=="MHz")
        return FrequencyLineEdit->text().toDouble()*1e6;
    return ERROR;
}
