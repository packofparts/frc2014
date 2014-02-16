#include "ToggleFieldRelativeCommand.h"

ToggleFieldRelativeCommand::ToggleFieldRelativeCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void ToggleFieldRelativeCommand::Initialize() {
	mecanumDrive->ToggleFieldRelative();
}

// Called repeatedly when this Command is scheduled to run
void ToggleFieldRelativeCommand::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleFieldRelativeCommand::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleFieldRelativeCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleFieldRelativeCommand::Interrupted() {
}
