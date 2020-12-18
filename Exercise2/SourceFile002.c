#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB

task main()
{
	char mean[4];

	mean[0] = 'R';
	mean[1] = 'F';
	mean[2] = 'L';
	mean[3] = 'X';

	char dir[20];
	strcpy(dir, "RFFRFFRFFLFFLFFX");

	// mean[0] -> Right
	// mean[1] -> forward
	// mean[2] -> Left
	// mean[3] -> X

	for(int i = 0; i < 16; i++)
	{
		dir[i];

		if(dir[i] == 'R') {
			motor[LEFT_MOTOR] = 50; motor[RIGHT_MOTOR] = 0;
			wait1Msec(850);
		}
		else if(dir[i] == 'F') {
			motor[LEFT_MOTOR] = +50; motor[RIGHT_MOTOR] = +50;
			wait1Msec(500);
		}
		else if(dir[i] == 'L') {
			motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 50;
			wait1Msec(850);
		}

		else if(dir[i] == 'X') {
			motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 0;

			playSound(soundBeepBeep);
			wait1Msec(500);
			ClearSounds();
		}
	}
}
