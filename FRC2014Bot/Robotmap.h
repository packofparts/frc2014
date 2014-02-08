#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// ********************
//	   Drive Motors
// ******************** 

#define DRIVE_FRONT_LEFT 2
#define DRIVE_FRONT_RIGHT 3
#define DRIVE_REAR_LEFT 4
#define DRIVE_REAR_RIGHT 5

// *******************
//		  Gyro
// *******************

#define GYRO_ANALOG_CHANNEL 1
#define GYRO_MAX_BOT_ROTATION_RATE 215

// *******************
//		 Input
// *******************

#define JOYSTICK_XBOX 1

#define JOYSTICK_XBOX_AXIS_X 0
#define JOYSTICK_XBOX_AXIS_Y 1
#define JOYSTICK_XBOX_AXIS_ROT 3

#define JOYSTICK_BUTTON_RESET_GYRO 1
#define JOYSTICK_BUTTON_TOGGLE_FIELD_RELATIVE 3

#define JOYSTICK_DEADZONE_ENABLE 0
#define JOYSTICK_DEADZONE 0.2
#define JOYSTICK_POWER 2

#endif
