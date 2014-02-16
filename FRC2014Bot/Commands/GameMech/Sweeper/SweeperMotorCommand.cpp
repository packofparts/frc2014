#include "SweeperMotorCommand.h"

SweeperMotorCommand::SweeperMotorCommand() {
	Requires(sweeper);
}

// Called just before this Command runs the first time
void SweeperMotorCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SweeperMotorCommand::Execute() {
	sweeper->SetSweepSpeed(oi->GetSweep());
}

// Make this return true when this Command no longer needs to run execute()
bool SweeperMotorCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SweeperMotorCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SweeperMotorCommand::Interrupted() {
}
