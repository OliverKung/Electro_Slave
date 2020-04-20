#include "C_RF_Calc.h"

double inductance_Calc(double inductor,double Freq)
{
    return 2*M_PI*inductor*Freq;
}
double capcitance_Calc(double Capcitor,double Freq)
{
    return 1/(2*M_PI*Capcitor*Freq);
}
