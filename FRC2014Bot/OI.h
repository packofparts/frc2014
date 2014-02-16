#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Robotmap.h"

class OI {
private:
	Joystick* xbox;
	Joystick* bear;
public:
	OI();
	float GetTranslateX();
	float GetTranslateY();
	float GetRotate();
	
	float GetSweep();
	
	void PrintInputs();
};

#endif
