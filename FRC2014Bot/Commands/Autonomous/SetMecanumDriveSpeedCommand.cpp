#include "SetMecanumDriveSpeedCommand.h"

SetMecanumDriveSpeedCommand::SetMecanumDriveSpeedCommand(float xSpeed, float ySpeed, float rotSpeed)
{
	Requires(mecanumDrive);
	this->x = xSpeed;
	this->y = ySpeed;
	this->rot = rotSpeed;
}

// Called just before this Command runs the first time
void SetMecanumDriveSpeedCommand::Initialize()
{
	mecanumDrive->MecanumDrive(x, y, rot, 0);
}

// Called repeatedly when this Command is scheduled to run
void SetMecanumDriveSpeedCommand::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool SetMecanumDriveSpeedCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetMecanumDriveSpeedCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetMecanumDriveSpeedCommand::Interrupted()
{
}
