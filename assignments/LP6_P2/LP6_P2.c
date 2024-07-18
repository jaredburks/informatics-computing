/*
 * LP6_P2.c
 *
 *  Created on: Nov 3, 2020
 *      Author: burksj
 */


#include <stdio.h>
#include <stdbool.h>

void how_much_pay(int x); //Prototype for how_much_pay function.


int main (void){
	int arrival_time = 0; //0 is noon, 12 is midnight.

	setbuf(stdout, NULL);
	printf("Enter your arrival time...\n");
	scanf("%d", &arrival_time);

	how_much_pay(arrival_time);

	return 0;
}

//Function how_much_pay() below calculates and prints price_to_pay.
void how_much_pay(int x){
	int maximum_to_pay = 53;
	int price_to_pay = 0;
	int base_price = 10;
	int late_fee = 5; //Added every hour past noon.

	if(x > 12 || x < 0){
		fprintf(stderr, "%s", "Invalid!\n"); // Error message on stderr.
	}
	else{
		price_to_pay = base_price + (late_fee * x);

		bool isNotLessThanMaximum = (price_to_pay >= maximum_to_pay); //Initialize isNotLessThanMaximum.

		if(isNotLessThanMaximum){
			printf("Price to pay = %d", maximum_to_pay);
		}
		else{
			printf("Price to pay = %d", price_to_pay);
		}
	}
}
