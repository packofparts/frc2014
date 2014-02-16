#ifndef SWEEPERDOWNCOMMAND_H
#define SWEEPERDOWNCOMMAND_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class SweeperDownCommand: public CommandBase
{
public:
	SweeperDownCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
