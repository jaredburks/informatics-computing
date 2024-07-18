/*
 * LP7_P1.c
 *
 *  Created on: Nov 9, 2020
 *      Author: burksj
 */

#include <stdio.h>

long long int numbers_to_add;
long long int sum = 0; //initialize sum.

long long int sum_of_digits(long long int n); //Function prototype for sum_of_digits.


int main(void){

	setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter integers to be added...\n");
	scanf("%I64d", &numbers_to_add); //User input initializes numbers_to_add.

	sum_of_digits(numbers_to_add);

	printf("sum of digits in %I64d = %I64d\n", numbers_to_add, sum);

	return 0;
}

//The function below adds entered integers.
long long int sum_of_digits(long long int numbers_to_add){
	if(numbers_to_add < 0){
		numbers_to_add = (numbers_to_add * -1);
		sum_of_digits(numbers_to_add);
	}
	else if(numbers_to_add < 10){
		sum += numbers_to_add;
	}
	else if( numbers_to_add >= 10){
		sum += numbers_to_add % 10 + sum_of_digits(numbers_to_add / 10);
	}

	return 0;
}
