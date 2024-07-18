/*
 * LP5P1.c
 *
 *  Created on: Oct 20, 2020
 *      Author: schoepkej
 */
#include <stdio.h>
#define MAX 10
int main(void)
{
	int number_of_players;
	int weights_total_team1 = 0, weights_total_team2 = 0;
	scanf("%d", &number_of_players);
	int weights1[MAX], weights2[MAX];
	for(int i = 0;i < number_of_players;i++)
	{
		scanf("%d", &weights1[i]);
		weights_total_team1 = weights_total_team1 + weights1[i];
		scanf("%d", &weights2[i]);
		weights_total_team2 = weights_total_team2 + weights2[i];
	}
	int is_team1_advantage = weights_total_team1 > weights_total_team2;
	if (is_team1_advantage){
		printf("Team 1 has an advantage\nTotal weight for team 1 = %d\nTotal weight for team 2 = %d", weights_total_team1, weights_total_team2);;}
	else{
		printf("Team 2 has an advantage\nTotal weight for team 1 = %d\nTotal weight for team 2 = %d", weights_total_team1, weights_total_team2);;}

	return 0;
}
/**
4
110
106
113
102
112
121
117
111
**/

