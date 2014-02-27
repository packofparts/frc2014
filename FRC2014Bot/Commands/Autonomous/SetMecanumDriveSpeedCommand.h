#ifndef SETMECANUMDRIVESPEEDCOMMAND_H
#define SETMECANUMDRIVESPEEDCOMMAND_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class SetMecanumDriveSpeedCommand: public CommandBase
{
	float x, y, rot;
public:
	SetMecanumDriveSpeedCommand(float xSpeed, float ySpeed, float rotSpeed);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
