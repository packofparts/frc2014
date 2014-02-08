#ifndef PRINTALLINPUTCOMMAND_H
#define PRINTALLINPUTCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Matthew
 */
class PrintAllInputCommand: public CommandBase {
public:
	PrintAllInputCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
