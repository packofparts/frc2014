#include "DelayCommand.h"

DelayCommand::DelayCommand(float delay)
{
	this->delayTime = delay;
}

// Called just before this Command runs the first time
void DelayCommand::Initialize()
{
	this->endTime = GetTime() + this->delayTime;
}

// Called repeatedly when this Command is scheduled to run
void DelayCommand::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool DelayCommand::IsFinished()
{
	return GetTime() > this->endTime;
}

// Called once after isFinished returns true
void DelayCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DelayCommand::Interrupted()
{
}
