#include "IC_engine.h"
#include "Motor.h"

double IC_engine::motorHeat(int i) {

    return (M[i] * H_m) + (V[i] * V[i] * H_v);

}

double IC_engine::motorCooling( double T_environment) {

    return C * (T_environment - T_motor);

}

double IC_engine::CS_acceleration(int i) {

    return M[i] / inertion;

}