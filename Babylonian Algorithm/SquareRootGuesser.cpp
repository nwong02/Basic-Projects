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
	double initialGuess = n / 2;
	double r = n / initialGuess;
	double previousGuess = 0.0;

	for (int i = 0; i < 5; i++)
	{
		double guess = (initialGuess + r) / 2;
		printf("Square root of %f is %f.\n", n, guess);
		return guess;
	}
}


int main(void)
{
	double i = 5.0;
	squareRootGuess(i);
}