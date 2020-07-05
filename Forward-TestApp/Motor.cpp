#include "Motor.h"
#include <vector>

Motor::Motor(int I,  int T_o, double H_m, double H_v, double T_m,
    double C, std::vector<int> M, std::vector<int> V) 
    : inertion { I }, T_overheat { T_o }, H_m { H_m }, H_v { H_v },
    T_motor{ T_m }, C{ C }, M{ M }, V{ V }
    {
    }
