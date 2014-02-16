#include "SweeperUpCommand.h"

SweeperUpCommand::SweeperUpCommand()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void SweeperUpCommand::Initialize()
{
	sweeper->SetSweeperSwing(false);
}

// Called repeatedly when this Command is scheduled to run
void SweeperUpCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool SweeperUpCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SweeperUpCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SweeperUpCommand::Interrupted()
{
}
