/*
 * HW4_P1.c
 *
 *  Created on: Oct 28, 2020
 *      Author: burksj
 */


#include <stdio.h>
#include <string.h>

#define MAX (100)

//This function converts meters to feet
double m2ft(double metric_value){
	metric_value = metric_value / 0.3048;
	return metric_value;
}

//This function converts grams to pounds
double g2lb(double metric_value){
	metric_value = metric_value * 0.002205;
	return metric_value;
}

//This function converts Fahrenheit to Celsius
double f2c(double metric_value){
	metric_value = metric_value * (9.0/5) + 32;
	return metric_value;
}

int main (void){

	int number_of_conversions = 0;
	double metric_value;
	char metric_unit;
	char converted_values[MAX];
	char displayed_values[MAX];

	setbuf(stdout, NULL); //Disable output buffering in the console through any options menu it provideds.
	printf("Enter the number of conversions, followed by each metric value, then their units...\n");

	scanf("%d", &number_of_conversions);
	for(int i = 0; i < number_of_conversions; i++){
		scanf("%lf %c", &metric_value, &metric_unit);
		switch(metric_unit){
			case 'm' :
				sprintf(converted_values,"%lf ft\n" ,m2ft(metric_value));
				strcat(displayed_values, converted_values);
				break;
			case 'g' :
				sprintf(converted_values,"%lf lb\n" ,g2lb(metric_value));
				strcat(displayed_values, converted_values);
				break;
			case 'c' :
				sprintf(converted_values,"%lf f\n" ,f2c(metric_value));
				strcat(displayed_values, converted_values);
				break;
			default :
				printf("Invalid input!");
		}

	}
	printf("%s", displayed_values);

	return 0;
}

