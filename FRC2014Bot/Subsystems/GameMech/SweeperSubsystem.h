#ifndef SWEEPERSUBSYSTEM_H
#define SWEEPERSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Matthew
 */
class SweeperSubsystem: public Subsystem
{
private:
	CANJaguar* sweep;
	Solenoid* swing;
public:
	SweeperSubsystem();
	void InitDefaultCommand();
	
	void SetSweepSpeed(float speed);
	void SetSweeperSwing(bool down);
};

#endif
