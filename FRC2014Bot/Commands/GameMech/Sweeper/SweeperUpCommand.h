#ifndef SWEEPERUPCOMMAND_H
#define SWEEPERUPCOMMAND_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class SweeperUpCommand: public CommandBase
{
public:
	SweeperUpCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
