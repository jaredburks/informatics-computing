/*
 * LT1.Burks.Jared.c
 *
 *  Created on: Oct 4, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main (void)
{
	long long int population;
	long long int nDays = 1; //initialize nDays;
	long long int newInfections;
	long long int totalInfections = 1; //initialize totalInfections.

    setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter population...\n");

	scanf("%I64d", &population);//User input initializes population.

	while(totalInfections <= population)
	{
		newInfections = totalInfections; //initialize newInfections.
		totalInfections += newInfections * 2;
		nDays++;
	}

	printf("Days needed for COVID-19 to infect the entire population is %I64d days.", nDays);

	return 0;
}
