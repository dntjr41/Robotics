#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB

task main()
{
	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
	wait1Msec(2000);

	motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = 0;
	wait1Msec(2000);

	motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = +50;
	wait1Msec(2000);

	motor[LEFT_MOTOR] = -50; motor[RIGHT_MOTOR] = -50;
	wait1Msec(2000);
}
