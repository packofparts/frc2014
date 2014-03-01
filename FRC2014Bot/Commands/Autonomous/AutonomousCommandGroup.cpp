#include "AutonomousCommandGroup.h"
#include "SetMecanumDriveSpeedCommand.h"
#include "DelayCommand.h"
#include "../GameMech/Sweeper/DumpBallCommandGroup.h"

AutonomousCommandGroup::AutonomousCommandGroup()
{
	AddSequential(new SetMecanumDriveSpeedCommand(0, AUTONOMOUS_DRIVE_SPEED, 0));
	AddSequential(new DelayCommand(AUTONOMOUS_DRIVE_TIME));
	AddSequential(new SetMecanumDriveSpeedCommand(0, 0, 0));
	AddSequential(new DumpBallCommandGroup());
}
