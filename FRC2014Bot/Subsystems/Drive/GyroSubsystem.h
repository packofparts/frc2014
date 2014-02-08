#ifndef GYROSUBSYSTEM_H
#define GYROSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Matthew
 */
class GyroSubsystem: public Subsystem {
private:
	Gyro* g;
public:
	GyroSubsystem();
	void InitDefaultCommand();
	float GetAngle();
	float GetRate();
	void ResetAngle();
};

#endif
