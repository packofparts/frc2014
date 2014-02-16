#include "ResetGyroHeadingCommand.h"

ResetGyroHeadingCommand::ResetGyroHeadingCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void ResetGyroHeadingCommand::Initialize() {
	gyro->ResetAngle();
	printf("Gyro heading reset to 0.\n");
}

// Called repeatedly when this Command is scheduled to run
void ResetGyroHeadingCommand::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ResetGyroHeadingCommand::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ResetGyroHeadingCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetGyroHeadingCommand::Interrupted() {
}
