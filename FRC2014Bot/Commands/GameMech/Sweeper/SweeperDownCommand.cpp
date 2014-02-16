#include "SweeperDownCommand.h"

SweeperDownCommand::SweeperDownCommand()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void SweeperDownCommand::Initialize()
{
	sweeper->SetSweeperSwing(true);
}

// Called repeatedly when this Command is scheduled to run
void SweeperDownCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool SweeperDownCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SweeperDownCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SweeperDownCommand::Interrupted()
{
}
