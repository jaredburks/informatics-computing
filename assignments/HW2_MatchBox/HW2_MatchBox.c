/*
 * HW2_MatchBox.c
 *
 *  Created on: Sep 27, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main(void)
{
	int number_of_matches;
	int capacity_of_box;
	int	number_of_boxes;
	int leftover_matches;

    setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter the number of matches to be boxed up...\n");
	scanf("%d", &number_of_matches);	//User input assigns a value to number_of_matches.
	printf("Enter the capacity of each box...\n");
	scanf("%d", &capacity_of_box);	//User input assigns a value to capacity_of_box.

	number_of_boxes = number_of_matches / capacity_of_box;	//initialize number_of_boxes with divided number_of_matches and capacity_of_box.
	leftover_matches = number_of_matches % capacity_of_box;	//initialize leftover_maches with remainder of number_of_matches and capacity_of_box.

	printf("Number of boxes filled up = %d\nNumber of leftover matches = %d", number_of_boxes, leftover_matches);

	return 0;
}

