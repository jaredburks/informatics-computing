/*
 * LP4_InverseName.c
 *
 *  Created on: Oct 13, 2020
 *      Author: burksj
 */


#include <stdio.h>
#include <string.h>

#define MAX (99) //Macro for maximum characters in name

void inverseName(char first_name[][MAX], char last_name[][MAX]){	//This function prints the inverse of entered full names.
		printf("%s, %s\n", last_name[0], first_name[0]);
}

int main (void)
{
	int number_of_patrons = 0; //initialize number_of_patrons.
	char first_name[MAX][MAX];
	char last_name[MAX][MAX];

    setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter the number of patrons...\n");
	scanf("%d\n", &number_of_patrons);	//User input initializes number_of_patrons.

	for(int i = 0; i < number_of_patrons; i++)
	{
		scanf("%s %s", first_name[i], last_name[i]);	//User input initializes first_name and last_name elements.
	}
	for(int j = 0; j < number_of_patrons; j++){
		inverseName(&first_name[j], &last_name[j]);
	}

	return 0;
}
