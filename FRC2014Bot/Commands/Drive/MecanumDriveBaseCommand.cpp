#include "MecanumDriveBaseCommand.h"

MecanumDriveBaseCommand::MecanumDriveBaseCommand()
{
	Requires(mecanumDrive);
}

void MecanumDriveBaseCommand::Initialize()
{
}


inline float fpow(float base, int power)
{
	float x = base;

	switch (power)
	{
	case 4:
		x *= base;
	case 3:
		x *= base;
	case 2:
		x *= base;
	case 1:
		break;
	default:
		for (int i = 1; i < power; i++)
		{
			x *= base;
		}
	}
	
	if(base < 0 && power % 2 == 0)
	{
		return -x;
	}
	
	return x;
}

// Called repeatedly when this Command is scheduled to run
void MecanumDriveBaseCommand::Execute()
{
	// Get inputs from joystick(s)
	double x = oi->GetTranslateX();
	double y = oi->GetTranslateY();
	double r = oi->GetRotate();
	// Get gyro heading
	double heading = gyro->GetAngle();

	// Curve the inputs
	x = fpow(x, JOYSTICK_POWER);
	y = fpow(y, JOYSTICK_POWER);
	r = fpow(r, JOYSTICK_POWER);

	// Pass to subsystem to drive motors
	mecanumDrive->MecanumDrive(x, y, r, heading);
}

bool MecanumDriveBaseCommand::IsFinished()
{
	// You can check out any time you'd like, but you can't never leave.
	return false;
}

void MecanumDriveBaseCommand::End()
{
	mecanumDrive->MecanumDrive(0, 0, 0, 0); // STOP
}

void MecanumDriveBaseCommand::Interrupted()
{
	mecanumDrive->MecanumDrive(0, 0, 0, 0); // STOP
}
