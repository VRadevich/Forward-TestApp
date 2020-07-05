#include <vector>

class Motor {
protected:

    int inertion;       // Момент инерции
    int T_overheat;     // Температура  перегрева мотора
    double H_m;         // Коэффициент зависимости скорости нагрева от скорости вращения коленвала
    double H_v;         // Коэффициент зависимости скорости нагрева от крутящего момента
    double T_motor;     // Начальная Температура мотора
    double C;           // С
    std::vector<int> M; // Для крутящего момента
    std::vector<int> V; // Для скорости вращения вала


    Motor(int, int, double, double, double, double, std::vector<int>, std::vector<int>);
    virtual double motorHeat(int) = 0;          // Функция расчета нагрева мотора
    virtual double motorCooling(double) = 0;    // Функция подсчета скорости охлаждения мотора
    virtual double CS_acceleration(int) = 0;       // Ускорение коленвала

};