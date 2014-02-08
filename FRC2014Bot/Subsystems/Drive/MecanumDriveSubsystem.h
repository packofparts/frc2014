#ifndef MECANUMDRIVESUBSYSTEM_H
#define MECANUMDRIVESUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Matthew
 */
class MecanumDriveSubsystem: public Subsystem {
private:
	//RobotDrive* d;
	CANJaguar *frontLeft, *rearLeft, *frontRight, *rearRight;
	bool enableFieldRelative;
public:
	MecanumDriveSubsystem();
	void InitDefaultCommand();
	void MecanumDrive(float x, float y, float rotate, float heading);
	void ToggleFieldRelative();
};

#endif
