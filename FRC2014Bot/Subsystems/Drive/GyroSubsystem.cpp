#include "GyroSubsystem.h"
#include "../../Robotmap.h"

GyroSubsystem::GyroSubsystem() :
	Subsystem("GyroSubsystem")
{
	g = new Gyro(GYRO_ANALOG_CHANNEL);
}

void GyroSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void GyroSubsystem::ResetAngle()
{
	g->Reset();
}

float GyroSubsystem::GetAngle()
{
	return g->GetAngle();
}

float GyroSubsystem::GetRate()
{
	return g->GetRate();
}
