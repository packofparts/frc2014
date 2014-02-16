#include "OI.h"

#include "Commands/Drive/ResetGyroHeadingCommand.h"
#include "Commands/Drive/ToggleFieldRelativeCommand.h"
#include "Commands/GameMech/Sweeper/SweeperDownCommand.h"
#include "Commands/GameMech/Sweeper/SweeperUpCommand.h"

#include "math.h"

/*
 * A little explanation about the beast that follows.
 * First, we define a map function that maps a value x from the range (a,b)->(c,d).
 * Based off of (read: lifted in verbatim) this function: http://www.arduino.cc/en/Reference/Map
 * 
 * Next, we define a deadzone function.  If we are inside the deadzone, return zero.
 * If we are outside the deadzone (active) return a value mapped to the
 * output range (0,1) from the deadzoned input range (deadzone, 1). Maps (dz,1)->(0,1).
 */
#if JOYSTICK_DEADZONE_ENABLE
inline float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

inline float dz(float x)
{
	if(fabs(x) > JOYSTICK_DEADZONE)
	{
		return fmap(x, JOYSTICK_DEADZONE, 1.0, 0, 1.0);
	}
	else
	{
		return 0;
	}
}
#else
inline float dz(float x)
{
	return x;
}
#endif

OI::OI()
{
	xbox = new Joystick(JOYSTICK_XBOX);
	
	JoystickButton* resetHeading = new JoystickButton(xbox, JOYSTICK_BUTTON_RESET_GYRO);
	resetHeading->WhenPressed(new ResetGyroHeadingCommand());
	
	JoystickButton* toggleFieldRelative = new JoystickButton(xbox, JOYSTICK_BUTTON_TOGGLE_FIELD_RELATIVE);
	toggleFieldRelative->WhenPressed(new ToggleFieldRelativeCommand());
	
	
	
	bear = new Joystick(JOYSTICK_BEAR);
	
	JoystickButton* sweeperSwing = new JoystickButton(bear, JOYSTICK_BEAR_BUTTON_ENABLE_SWEEPER);
	sweeperSwing->WhenPressed(new SweeperDownCommand());
	sweeperSwing->WhenReleased(new SweeperUpCommand());
}

float OI::GetTranslateX()
{
	return -dz(this->xbox->GetAxis((Joystick::AxisType)JOYSTICK_XBOX_AXIS_X));
}

float OI::GetTranslateY()
{
	return -dz(this->xbox->GetAxis((Joystick::AxisType)JOYSTICK_XBOX_AXIS_Y));
}

float OI::GetRotate()
{
	return -dz(this->xbox->GetAxis((Joystick::AxisType)JOYSTICK_XBOX_AXIS_ROT));
}

float OI::GetSweep()
{
	//return this->xbox->GetAxis((Joystick::AxisType)2);
	return this->bear->GetAxis((Joystick::AxisType)JOYSTICK_BEAR_AXIS_SWEEP);
}


void OI::PrintInputs()
{
	printf("%3.3f\t%3.3f\t%3.3f\n", GetTranslateX(), GetTranslateY(),
			GetRotate());
}

#undef MAP
