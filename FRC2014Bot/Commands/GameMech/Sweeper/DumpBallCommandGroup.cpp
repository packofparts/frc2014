#include "DumpBallCommandGroup.h"
#include "SweeperDownCommand.h"
#include "SweeperUpCommand.h"
#include "../../Autonomous/DelayCommand.h"
#include "SetSweeperCommand.h"

DumpBallCommandGroup::DumpBallCommandGroup()
{
	AddSequential(new SetSweeperCommand(1.0));
	AddSequential(new SweeperDownCommand());
	AddSequential(new DelayCommand(3.0));
	AddSequential(new SetSweeperCommand(0.0));
	AddSequential(new SweeperUpCommand());
}
