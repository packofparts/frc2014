#include "ShooterSubsystem.h"
#include "../../Robotmap.h"

ShooterSubsystem::ShooterSubsystem() :
	Subsystem("ShooterSubsystem")
{
	this->clutchSolenoid = new Solenoid(WINCH_CLUTCH_SOLENOID);
	this->winchJag = new CANJaguar(WINCH_MOTOR);
}

void ShooterSubsystem::InitDefaultCommand()
{
}

void ShooterSubsystem::SetClutchState(bool state)
{
	this->clutchSolenoid->Set(state);
}

void ShooterSubsystem::SetWinchSpeed(float speed)
{
	this->winchJag->Set(speed, 0x00);
}
