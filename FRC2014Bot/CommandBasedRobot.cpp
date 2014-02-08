#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/PrintAllInputCommand.h"
#include "Commands/Drive/MecanumDriveBaseCommand.h"
#include "CommandBase.h"

class CommandBasedRobot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	MecanumDriveBaseCommand* mecanum;

	virtual void RobotInit()
	{
		CommandBase::init();
		autonomousCommand = new PrintAllInputCommand();
		mecanum = new MecanumDriveBaseCommand();
		lw = LiveWindow::GetInstance();
	}

	virtual void AutonomousInit()
	{
		autonomousCommand->Start();
	}

	virtual void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	virtual void TeleopInit()
	{
		mecanum->Start();
	}

	virtual void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	virtual void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot)
;

