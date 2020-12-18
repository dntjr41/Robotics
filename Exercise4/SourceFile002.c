#pragma config(Sensor, S4, ultra, sensorEV3_Ultrasonic)

#define smooth 1.3

task main()
{
	int distance, pow;

	while (1)
	{
			distance = SensorValue(ultra);
			displayTextLine(0, "%d cm", distance);
			speed = abs(30 - distance) * smooth;

			// If robot is too far at obstacle
			// Forward the robot
			// And speed is more faster proportionally
			if (distance > 35)
			{
				motor[motorB] = speed;
				motor[motorC] = speed;
			}

			// If robot is too close at obstacle
			// Backward the robot
			// And speed is more slower proportionally
			else if (distance < 25)
			{
				motor[motorB] = -speed;
				motor[motorC] = -speed;
			}

			// If forces a robot be actually stopped at 30cm
			else if (distance = 30)
			{
				motor[motorB] = 0;
				motor[motorC] = 0;
			}
	}
	move(0);
}
