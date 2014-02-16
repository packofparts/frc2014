#include "MecanumCalc.h"

#include "math.h"

void MecanumCalc::RotateVector(float* x, float* y, float angle)
{
	double cosA = cos(angle * (3.14159 / 180.0));
	double sinA = sin(angle * (3.14159 / 180.0));
	double xOut = (*x) * cosA - (*y) * sinA;
	double yOut = (*x) * sinA + (*y) * cosA;
	*x = xOut;
	*y = yOut;
}

#define FABS(x) (x < 0 ? -x : x)

void MecanumCalc::NormalizeVector(MechDriveResult* v, float m)
{
	float max = m;

	for (int i = 0; i < 4; i++)
	{
		float f = FABS(v->af_mech[i]);

		if (f > max)
		{
			max = f;
		}
	}

	float ratio = m / max;
	
	for(int i = 0; i < 4; i++)
	{
		v->af_mech[i] = v->af_mech[i] * ratio;
	}
}

MechDriveResult* MecanumCalc::res = NULL;

MechDriveResult* MecanumCalc::ComputeMechanum(float x, float y, float r,
		float rv, float m)
{
	float xIn = x;
	float yIn = -y;	// Negate because forward is negative on the joystick
	
	// Rotate the vector in case we want to gyro stabilize translation
	// so that we translate with respect to the field instead of the
	// front of the robot.
	RotateVector(&xIn, &yIn, rv);
	
	res->f_mech.FrontLeft = xIn + yIn + r;
	res->f_mech.FrontRight = -xIn + yIn - r;
	res->f_mech.RearLeft = -xIn + yIn + r;
	res->f_mech.RearRight = xIn + yIn - r;

	return res;
}
