#include <stdio.h>
#include <stdlib.h>

/*
* Title			: SquareRootGuesser.cpp
* Project		: Basic Projects
* Author		: Nelson Wong
* Description	: Babylonian Algorithm to calculate the square root of a positie number. Program inputs a double, n, for the positive number, and iterates through the algorithm five times to arrive at a guess.
*/

double squareRootGuess(double n)
{
	double guess = n / 2;
	double ratio = n / guess;
	double precision = 0.001;
	while (guess - ratio > precision)
	{
		guess = (guess + ratio) / 2;
		ratio = n / guess;
		printf("%f\n", guess);
	}
	return ratio;
}


int main(void)
{

	double number = 5.0;
	squareRootGuess(number);
}