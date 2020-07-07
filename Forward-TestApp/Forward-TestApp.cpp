// Forward-TestApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <limits>
#include "Motor.h"
#include "IC_engine.h"

void TestStand(Motor* motor, int vecSize, int T) {   // Тестовый стенд, на который подается мотор

    int Seconds = 0;
    int i = 0;

    while (motor->T_motor <= motor->T_overheat) {
        motor->CS_acceleration(i);
        motor->T_motor +=
            (motor->motorHeat(i) -
                motor->motorCooling(T));
        if (i < vecSize - 1)
            i++;
        Seconds++;
    }

    std::cout << "Motor overheated after " << Seconds << " Seconds" << std::endl;

}

double TemperatureSetup() {    // Функция для задания температуры эксперимента

    double T;

    std::cout << "Enter the initial temperature" << std::endl;

    while (!(std::cin >> T) || (T <= -30) || (T >= 108)) {

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Your inputs is incorrect, try again " << std::endl;
    }

    return T;
}

int main()
{

    std::vector<int> M_toPass = { 20, 75, 100, 105, 75, 0 };  // Инициализация к.-л. зависимости крутящего
    std::vector<int> V_toPass = { 0, 75, 150, 200, 250,300 }; // момента от скорости вращения коленвала
    
    if (M_toPass.size() != V_toPass.size()) {                 // Проверка размеров векторов, 
        std::cout << "enter the correct data" << std::endl;   // образующих к.-л. зависимость M от V
        return 0;
    }
  
    double T_environment = TemperatureSetup();

    IC_engine Toyota1234{ 10, 110, 0.01, 0.0001, T_environment, 0.1, M_toPass, V_toPass };
    Motor* current;
    current = &Toyota1234;

    TestStand(current, M_toPass.size(), T_environment);

}

