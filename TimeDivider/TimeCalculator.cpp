#include <stdio.h>
#include <stdlib.h>

/*
* Project		: Time Calculator
* Title			: TimeCalculator.cpp
* Author		: Nelson Wong
* Description	: Program reads an integer input for time in seconds, display the number of hours, minutes, and seconds that correspond to the input. Ex. 50391 seconds is 13 hours, 59 minutes, 51 seconds
*/

int timeConversion(int timeSeconds)
{
	int hours, minutes, seconds = 0;
	int remainingSeconds = 0;

	hours = timeSeconds / 3600;

	remainingSeconds = timeSeconds - (hours * 3600);
	minutes = remainingSeconds / 60;

	remainingSeconds = remainingSeconds - (minutes * 60);
	seconds = remainingSeconds;

	printf("Total time is (HH:MM:SS) %d:%d:%d \n", hours, minutes, seconds);
	return 1;
}
	


int main(void)
{
	timeConversion(50391);
	
	//int hour = 50391 % 3600 / 3600;
	//int hours = 50391 / 3600;
	//printf("%d %d\n", hour, hours);
	
	return 0;
}