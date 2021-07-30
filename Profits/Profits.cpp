#include <stdio.h>
#include <stdlib.h>


/*
* An electronics company sees a 13% increase in sales from the previous year, making 27% more profit than the previous work. Write a program that takes the company’s previous year’s sales and profit in millions as input and outputs the increase in sales and profit in millions from the previous year. Use a variable declaration with the modifier const to express the sales and profit increase.
*/

#define PREVIOUS_YEAR_SALE 25079
#define PREVIOUS_YEAR_PROFIT 750000

int sales = PREVIOUS_YEAR_SALE;
int profit = PREVIOUS_YEAR_PROFIT;


double salesIncrease(double previousYearSale)
{
	double yearlySale = 1.13 * previousYearSale;
	printf("This year's sale is: %f: \n", yearlySale);
	return yearlySale;
}

double profitIncrease(double previousYearProfit)
{
	double yearlyProfit = 1.27 * previousYearProfit;
	printf("This year's profit is: %f: \n", yearlyProfit);
	return yearlyProfit;
}

int main(void)
{
	salesIncrease(sales);
	profitIncrease(profit);
	return 0;
}