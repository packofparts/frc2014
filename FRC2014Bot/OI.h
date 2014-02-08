#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Robotmap.h"

class OI {
private:
	Joystick* xbox;
public:
	OI();
	float GetTranslateX();
	float GetTranslateY();
	float GetRotate();
	void PrintInputs();
};

#endif
