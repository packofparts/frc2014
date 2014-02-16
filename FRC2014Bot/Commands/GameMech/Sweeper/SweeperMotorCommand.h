#ifndef SWEEPERMOTORCOMMAND_H
#define SWEEPERMOTORCOMMAND_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class SweeperMotorCommand: public CommandBase
{
public:
	SweeperMotorCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
