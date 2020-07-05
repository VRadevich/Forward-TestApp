// Forward-TestApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Motor.h"
#include "IC_engine.h"

int main()
{

    std::vector<int> M_toPass = { 20, 75, 100, 105, 75, 0 };
    std::vector<int> V_toPass = { 0, 75, 150, 200, 250, 300 };
    
    double T_environment;
    IC_engine Toyota1234 = { 10, 110, 0,01, 0,0001, T_environment, 0.1, M_toPass, V_toPass } ;

    
}

