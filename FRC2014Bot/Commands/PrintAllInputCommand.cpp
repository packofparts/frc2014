#include "PrintAllInputCommand.h"

PrintAllInputCommand::PrintAllInputCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void PrintAllInputCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void PrintAllInputCommand::Execute() {
	oi->PrintInputs();
}

// Make this return true when this Command no longer needs to run execute()
bool PrintAllInputCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PrintAllInputCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PrintAllInputCommand::Interrupted() {
}
