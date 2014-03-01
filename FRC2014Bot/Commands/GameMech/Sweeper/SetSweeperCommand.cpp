#include "SetSweeperCommand.h"

SetSweeperCommand::SetSweeperCommand(float speed)
{
	this->sweepSpeed = speed;
}

// Called just before this Command runs the first time
void SetSweeperCommand::Initialize()
{
	sweeper->SetSweepSpeed(this->sweepSpeed);
}

// Called repeatedly when this Command is scheduled to run
void SetSweeperCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool SetSweeperCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetSweeperCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetSweeperCommand::Interrupted()
{
}
