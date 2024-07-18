/*
 * LP5_Hotel.c
 *
 *  Created on: Oct 20, 2020
 *      Author: burksj
 */


#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age_of_customer = 0; //initialize age_of_customer.
	int weight_of_luggage = 0; //initialize weight_of_luggage.
	int age_of_innkeeper = 60; //initialize age_of_innkeeper.
	int luggage_fee = 20; //initialize luggage_fee.
	int price_to_pay = 130; //initialize price_to_pay.

	setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter your age followed by the weight of your luggage...\n");
	scanf("%d %d", &age_of_customer, &weight_of_luggage);	//User input assigns new value to age_of_customer and weight_of_luggage.

	bool isAge60 = (age_of_customer == age_of_innkeeper);	//initialize isAge60
	bool isAgeLessThan10 = (age_of_customer < 10);			//initialize isAgeLessThan10
	bool isLuggageMoreThan20 = (weight_of_luggage > 20);	//initialize isLuggageMoreThan20

	if(isAge60){
		price_to_pay = 0;
	}
	else if(isAgeLessThan10){
		price_to_pay = 15;
	}
	else if(isLuggageMoreThan20){
		price_to_pay += luggage_fee;
	}
	printf("Price to pay = $%d", price_to_pay);

	return 0;
}
