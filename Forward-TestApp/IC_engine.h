#include "Motor.h"

class IC_engine: public Motor {
public:

	using Motor::Motor;
	double motorHeat(int) override;
	double motorCooling(double) override;
	double CS_acceleration(int) override;

};