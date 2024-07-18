/*
 * LP3P2.c
 *
 *  Created on: Oct 5, 2020
 *      Author: schoepkej
 */

#include <stdio.h>

int main(void)
{
	int nRobots, height, weight, enginePower, resistance;
	int totalCombinedPower = 0; //initilize totalCombinedPower.

    scanf("%d\n", &nRobots);

    for(int i = 0; i < nRobots; i++){
    	scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance); //User input initializes height, weight, enginePower, and resistance.
    	totalCombinedPower = ( enginePower + resistance) * ( weight - height ) + totalCombinedPower;
    }

    printf("Total combined power = %d", totalCombinedPower);

    return 0;
}
