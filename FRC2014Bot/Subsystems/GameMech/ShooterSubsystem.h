#ifndef SHOOTERSUBSYSTEM_H
#define SHOOTERSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Matthew
 */
class ShooterSubsystem: public Subsystem
{
private:
	CANJaguar* winchJag;
	Solenoid* clutchSolenoid;
public:
	ShooterSubsystem();
	void InitDefaultCommand();

	void SetClutchState(bool state);
	void SetWinchSpeed(float speed);
};

#endif
