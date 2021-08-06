#include <stdlib.h>
#include <stdio.h>


double distanceAndSpeed(int speedInMiles, int travelHours)
{
	int speed = speedInMiles;
	int flightTime = travelHours;

	double distanceFlown = (double)speed * flightTime;

	double speedMetres = (distanceFlown / 3600) * 1609.344;
	printf("The speed of the aircraft in m/s is: %f", speedMetres);
	return speedMetres;
}

int main(void)
{
	int speedOfPlane = 400;
	int time = 3;

	distanceAndSpeed(speedOfPlane, time);
}