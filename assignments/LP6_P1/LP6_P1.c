/*
 * LP6P1.c
 *
 *  Created on: Nov 2, 2020
 *      Author: schoepkej
 */
//#include <stdio.h>
//
//
//
//int how_many_cities(int t, int old_population, int new_population, char city_name[100]);
//
//
//
//int main(void){
//    int old_population[100], new_population[100];
//    int number_of_cities, t = 0;
//    char city_name[100];
//    scanf("%d", &number_of_cities);
//
//
//
//    for(int i = 0; i < number_of_cities; i++){
//    scanf("%s %d %d", &city_name[i], &old_population[i], &new_population[i]);
//
//
//
//        t = how_many_cities(t, old_population[i], new_population[i], &city_name[i] );
//    }
//
//
//
//    printf("Cities with population more than 10k = %d",t);
//
//
//
//    return 0;
//}
//int how_many_cities(int t, int old_population, int new_population, char city_name[100]){
//    int change_in_population = new_population - old_population;
//    int isIncreasedMoreThan10k = change_in_population > 10000;
//    if (isIncreasedMoreThan10k){
//        printf ("%s : increased from %d to %d\n", &city_name[0], old_population, new_population);
//        t++;
//    }else{}
//    return t;
//}


/*
 * LP6P1.c
 *
 *  Created on: Nov 2, 2020
 *      Author: schoepkej
 */
#include <stdio.h>

int how_many_cities( int t, int old_population, int new_population, char city_name[100]);

int main(void){
	int old_population[100], new_population[100];
	int number_of_cities, t = 0;
	char city_name[100];
	scanf("%d", &number_of_cities);

	for(int i = 0; i < number_of_cities; i++){
	scanf("%s %d %d", &city_name[i], &old_population[i], &new_population[i]);

		t = how_many_cities( t, old_population[i], new_population[i], &city_name[i] );
	}

	printf("Cities with population more than 10k = %d",t);

	return 0;
}
int how_many_cities( int t, int old_population, int new_population, char city_name[100]){
	int change_in_population = new_population - old_population;
	int isIncreasedMoreThan10k = change_in_population > 10000;//initialize isIncreasedMoreThan10k
	if (isIncreasedMoreThan10k){
		printf ("%s : increased from %d to %d\n", &city_name[0], old_population, new_population);
		t++;
	}else{}
	return t;}
/**
6
city_A 50 1000
city_B 2000 11000
city_C 5000 17000
city_D 1400 4730
city_F 50 1500
city_G 11000 23590

 */



