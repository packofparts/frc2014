#include "SweeperSubsystem.h"
#include "../../Robotmap.h"

SweeperSubsystem::SweeperSubsystem() :
	Subsystem("SweeperSubsystem")
{
	sweep = new CANJaguar(SWEEPER_MOTOR, CANJaguar::kPercentVbus);
	swing = new Solenoid(SWEEPER_SOLENOID);
}

void SweeperSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void SweeperSubsystem::SetSweepSpeed(float speed)
{	
	sweep->Set(speed, 0x00);
}

void SweeperSubsystem::SetSweeperSwing(bool down)
{
	swing->Set(down);
}
