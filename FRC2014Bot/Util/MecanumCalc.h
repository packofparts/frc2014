#ifndef MECANUM_CALC_H
#define MECANUM_CALC_H

union MechDriveResult
{
	struct f_mech
	{
		float FrontLeft, RearLeft, FrontRight, RearRight;
	} f_mech;
	float af_mech[4];
};

class MecanumCalc
{
private:
	static MechDriveResult* res;
public:
	static MechDriveResult* ComputeMechanum(float x, float y, float theta,
			float rotateVector, float maxOutput);
	static void NormalizeVector(MechDriveResult* vect, float max);
	static void RotateVector(float* x, float* y, float angle);
};

#endif
