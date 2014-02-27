#ifndef DELAYCOMMAND_H
#define DELAYCOMMAND_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class DelayCommand: public CommandBase
{
private:
	float delayTime, endTime;
public:
	DelayCommand(float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
