/*
 * Dice_ForLoop.c
 *
 *  Created on: Oct 5, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main (void)
{
	int number_of_throws = 0; //initialize number_of_throws.
	int dice_value = 0; //initialize dice_value.

    setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter integers...\n");

	for(; dice_value != 6;number_of_throws++){
		scanf("%d", &dice_value);
	}

	printf("We needed %d throws to get the value of 6", number_of_throws);

	return 0;
}

