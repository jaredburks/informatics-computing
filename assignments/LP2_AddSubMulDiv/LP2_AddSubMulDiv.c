/*
 * LP2_AddSubMulDiv.c
 *
 *  Created on: Sep 22, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main(void)
{
	float a = 35.2;
	float b = 25.7;
	float add = a + b; //initialize sum with added a and b
	float sub = a - b; //initialize sub with subtracted a and b
	float mul = a * b; //initialize mul with multiplied a and b
	float div = a / b; //initialize div with divided a and b

	printf("%.2f + %.2f = %6.2f\n", a, b, add);
	printf("%.2f - %.2f = %6.2f\n", a, b, sub);
	printf("%.2f * %.2f = %6.2f\n", a, b, mul);
	printf("%.2f / %.2f = %6.2f\n", a, b, div);

	return 0;
}

/* expected output:
 *
 * 35.20 + 25.70 = 60.90
 * 35.20 - 25.70 = 9.50
 * 35.20 * 25.70 = 904.64
 * 35.20 / 25.70 = 1.37
*/
