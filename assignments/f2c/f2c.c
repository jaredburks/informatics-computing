/*
 * f2c.c
 *
 *  Created on: Sep 21, 2020
 *      Author: burksj
 */


#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;		/* lower limit of temperature scale */
	upper = 120;	/* upper limit */
	step = 10; 		/* step size */

	fahr = lower;
	printf("Temperature Conversion\n");
	printf("========================\n");
	printf("	Fahr   Celsius\n");
	printf("========================\n");
	while (fahr <= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("\t%3.0f\t%5.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
