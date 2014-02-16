#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
MecanumDriveSubsystem* CommandBase::mecanumDrive = NULL;
SweeperSubsystem* CommandBase::sweeper = NULL;
ShooterSubsystem* CommandBase::shooter = NULL;

GyroSubsystem* CommandBase::gyro = NULL;

OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	mecanumDrive = new MecanumDriveSubsystem();
	sweeper = new SweeperSubsystem();
	shooter = new ShooterSubsystem();
	
	gyro = new GyroSubsystem();
	
	oi = new OI();
}
