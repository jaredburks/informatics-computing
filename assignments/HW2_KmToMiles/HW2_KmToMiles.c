/*
 * HW2.c
 *
 *  Created on: Sep 27, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main(void)
{
	float distance_in_km, distance_in_miles;
	const float km_per_mile = 0.621371;	//initialize km_per_mile.

    setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter the number of km...\n");
	scanf("%f", &distance_in_km);	//User input initializes distance_in_km.

	distance_in_miles = distance_in_km * km_per_mile;	//initialize distance_in_miles with multiplied distance_in_km and km_per_mile.

	printf("Distance in miles = %8.6f", distance_in_miles);

	return 0;
}
