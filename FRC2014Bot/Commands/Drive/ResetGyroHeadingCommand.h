#ifndef RESETGYROHEADINGCOMMAND_H
#define RESETGYROHEADINGCOMMAND_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class ResetGyroHeadingCommand: public CommandBase {
public:
	ResetGyroHeadingCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
