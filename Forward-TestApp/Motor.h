#include <vector>

class Motor {
protected:

    int inertion;       // ������ �������
    int T_overheat;     // �����������  ��������� ������
    double H_m;         // ����������� ����������� �������� ������� �� �������� �������� ���������
    double H_v;         // ����������� ����������� �������� ������� �� ��������� �������
    double T_motor;     // ��������� ����������� ������
    double C;           // �
    std::vector<int> M; // ��� ��������� �������
    std::vector<int> V; // ��� �������� �������� ����


    Motor(int, int, double, double, double, double, std::vector<int>, std::vector<int>);
    virtual double motorHeat(int) = 0;          // ������� ������� ������� ������
    virtual double motorCooling(double) = 0;    // ������� �������� �������� ���������� ������
    virtual double CS_acceleration(int) = 0;       // ��������� ���������

};