#include "Motor.h"

class IC_engine: public virtual Motor {
public:

	using Motor::Motor;
	double motorHeat(int) override;
	double motorCooling(double) override;
	void CS_acceleration(int) override;
	

};