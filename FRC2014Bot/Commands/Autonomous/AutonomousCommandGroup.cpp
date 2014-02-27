#include "AutonomousCommandGroup.h"
#include "SetMecanumDriveSpeedCommand.h"
#include "DelayCommand.h"

AutonomousCommandGroup::AutonomousCommandGroup()
{
	AddSequential(new SetMecanumDriveSpeedCommand(0, 0.3f, 0));
	AddSequential(new DelayCommand(AUTONOMOUS_DRIVE_TIME));
	AddSequential(new SetMecanumDriveSpeedCommand(0, 0, 0));
}
