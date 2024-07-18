/*
 * HW3_Price.c
 *
 *  Created on: Oct 14, 2020
 *      Author: burksj
 */

#include <stdio.h>

int main(void)
{
	int maximum = 10; //initialize maximum for amount of ingredients.
	int number_of_ingredients = 0; //initialize number_of_ingredients[].
	double price_per_lb[10]; //initialize price_per_lb[].
	double weight_needed[10]; //initialize weight_needed[].
	double total_price = 0; //initialize total_price.

	printf("Enter the number of ingredients, then price per lb, then weight needed...\n");
	fflush(stdout);
	scanf("%d", &number_of_ingredients); //User input initializes number_of_ingredients.


	if(number_of_ingredients <= maximum){
		for(int i = 0; i < number_of_ingredients; i++){
			scanf("%lf", &price_per_lb[i]); //User input initializes price_per_lb elements.
		}
		for(int j = 0; j < number_of_ingredients; j++){
			scanf("%lf", &weight_needed[j]); //User input initializes weight_needed elements.
		}
		for(int k = 0; k < number_of_ingredients; k++){
			total_price += (price_per_lb[k] * weight_needed[k]);
		}
		printf("Total price: = $%lf", total_price);
	}
	else{
		printf("Please enter a value no higher than 10...\n");
	}

	return 0;
}
