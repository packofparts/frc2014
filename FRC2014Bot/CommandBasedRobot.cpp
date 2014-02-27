#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/Drive/MecanumDriveBaseCommand.h"
#include "Commands/GameMech/Sweeper/SweeperMotorCommand.h"
#include "Commands/Autonomous/AutonomousCommandGroup.h"
#include "CommandBase.h"

class CommandBasedRobot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	MecanumDriveBaseCommand* mecanum;
	SweeperMotorCommand* sweeper;
	Compressor* compressor;

	virtual void RobotInit()
	{
		CommandBase::init();
		autonomousCommand = new AutonomousCommandGroup();
		mecanum = new MecanumDriveBaseCommand();
		sweeper = new SweeperMotorCommand();
		compressor = new Compressor(COMPRESSOR_TRANSDUCER, COMPRESSOR_SPIKE);
		lw = LiveWindow::GetInstance();
	}

	virtual void AutonomousInit()
	{
		autonomousCommand->Start();
		compressor->Start();
	}

	virtual void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	virtual void TeleopInit()
	{
		mecanum->Start();
		sweeper->Start();
		compressor->Start();
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
