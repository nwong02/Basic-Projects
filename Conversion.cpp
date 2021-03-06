#include <stdio.h>
#include <stdlib.h>

/*
* FILENAME		: Conversion.cpp
* AUTHOR		: Nelson Wong
* DESCRIPTION	: Project to convert volume in mL to gal (US), chose to write the converting part as its own function and call it in main, may decide to write the remaining volume as its own function later
*/

#define VOLUME_IN_MILLILITRES 500

double millToGallon(int volume);

double millToGallon(int volume)
{
	double gallon = 0.0;
	gallon = volume * (1 / 3785.41);
	printf("The volume in gallons is: %f \n", gallon);

	return gallon;
}

//int remainingVolume(int volume)
//{
//	double gallon = 1.0;
//	double remaining = gallon - millToGallon(VOLUME_IN_MILLILITRES);
//	return 0;
//}


int main(void)
{
	double volume = millToGallon(VOLUME_IN_MILLILITRES);
	double remainingVolume = 1.0 - volume;

	printf("Remaining volume is: %f \n", remainingVolume);
}