#include <stdio.h>
#include <stdlib.h>


/*
* Project		: Basic Projects
* Author		: Nelson Wong
* Title			: Capacity.cpp
* Description	: Determine whether a truck with a maximum capacity can be loaded further or not.
*/

/*
* Write a program that determines whether a truck is loaded beyond its rated capacity. The program will read in the truck's maximum load capacity, the number of boxes it's carrying, and the average weight of a box. If the total weight of the boxes is less than or equal to the truck's capacity, the program announces that the truck can legally carry all boxes and tells how many additional boxes can be added. If the number of boxes exceeds the maximum capacity, the program announces that the truck is overloaded and says how many must be removed.
*/


int main(void)
{
	int maxLoadCapacity = 56;		//in metric tonnes
	int numberOfBoxes = 760;		
	double massOfBoxes = 0.025;		//in metric tonnes

	double quantityOfBoxes = maxLoadCapacity / massOfBoxes;
	double currentMass = (double)(numberOfBoxes * massOfBoxes);

	double boxesRemaining = quantityOfBoxes - numberOfBoxes;

	if (currentMass > maxLoadCapacity)
	{
		printf("The maximum load has been exceeded!\n");
		printf("Must remove %f number of boxes.\n", boxesRemaining);
	}
	else
	{
		printf("There is still room for more if you wish to add.\n");
	}

	printf("The truck's maximum capacity in metric tons is: %d. \n", maxLoadCapacity);
}