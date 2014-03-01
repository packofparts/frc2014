#ifndef SETSWEEPERCOMMAND_H
#define SETSWEEPERCOMMAND_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class SetSweeperCommand: public CommandBase
{
private:
	float sweepSpeed;
public:
	SetSweeperCommand(float speed);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
