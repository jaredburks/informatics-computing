/*
 * LP2_AddFloat.c
 *
 *  Created on: Sep 22, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main(void)
{
	float a = 35.2;
	float b = 25.7;
	float sum = a + b; //initialize sum with added a and b

	printf("\nSum of %.2f and %.2f = %.2f\n", a, b, sum);

	return 0;
}

/* expected output:
 *
 * Sum of 35.20 and 25.70 = 60.90
*/
