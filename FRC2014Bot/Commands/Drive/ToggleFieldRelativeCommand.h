#ifndef TOGGLEFIELDRELATIVECOMMAND_H
#define TOGGLEFIELDRELATIVECOMMAND_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class ToggleFieldRelativeCommand: public CommandBase {
public:
	ToggleFieldRelativeCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
