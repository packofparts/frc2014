#include "MecanumDriveSubsystem.h"
#include "../../Robotmap.h"

#include "../../Util/MecanumCalc.h"

MecanumDriveSubsystem::MecanumDriveSubsystem() :
	Subsystem("MecanumDriveSubsystem")
{
	enableFieldRelative = false;
	
	frontLeft = new CANJaguar(DRIVE_FRONT_LEFT, CANJaguar::kPercentVbus);
	rearLeft = new CANJaguar(DRIVE_REAR_LEFT, CANJaguar::kPercentVbus);
	frontRight = new CANJaguar(DRIVE_FRONT_RIGHT, CANJaguar::kPercentVbus);
	rearRight = new CANJaguar(DRIVE_REAR_RIGHT, CANJaguar::kPercentVbus);

	frontLeft->SetSafetyEnabled(false); // Shouldn't have to do this.
	rearLeft->SetSafetyEnabled(false);
	frontRight->SetSafetyEnabled(false);
	rearRight->SetSafetyEnabled(false);

	//d = new RobotDrive(frontLeft, rearLeft, frontRight, rearRight);
}

void MecanumDriveSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void MecanumDriveSubsystem::MecanumDrive(float x, float y, float rotate,
		float heading)
{
	if(!enableFieldRelative)
	{
		heading = 0;
	}
	
	MechDriveResult* drv = MecanumCalc::ComputeMechanum(x, y, rotate, heading,
			1.0);

	uint8_t syncGroup = 0x80;

	frontLeft->Set(drv->f_mech.FrontLeft, syncGroup);
	rearLeft->Set(drv->f_mech.RearLeft, syncGroup);
	frontRight->Set(drv->f_mech.FrontRight, syncGroup);
	rearRight->Set(drv->f_mech.RearRight, syncGroup);

	CANJaguar::UpdateSyncGroup(syncGroup);
}

void MecanumDriveSubsystem::ToggleFieldRelative()
{
	enableFieldRelative = !enableFieldRelative;
}
