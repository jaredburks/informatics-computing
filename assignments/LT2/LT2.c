/*
 * LT2.c
 *
 *  Created on: Nov 10, 2020
 *      Author: burksj
 */

#include <stdio.h>
#include <string.h>


#define MAXLINE 1024

int s_trim(char s[]);

int mygetline(char line[], int maxline);

char s[MAXLINE];

int main (void){
	mygetline(s, MAXLINE);

	printf("Before trimming: length = %d, s[] = \"%s\"\n", strlen(s), s);
	printf(" After trimming: length = %d", s_trim(s));

	return 0;
}

int s_trim(char s[]){
	int v = 0;
	int n = 0;

	//The loop below trims spaces before the first char.
	for(n = 0; n <= strlen(s)-1; n++){
		if (s[n] != ' ' && s[n] !=  '\t' && s[n] != '\n'){
			break;
		}
		v++;
	}

	//The loop below trims spaces after the last char.
	for(n = strlen(s)-1; n >= 0; n--){
		if (s[n] != ' ' && s[n] !=  '\t' && s[n] != '\n'){
			break;
		}
	}

	s[n+1] = '\0';

	return (n+1) - v;
}

int mygetline(char s[], int lim){
	int c, i;

	for(i = 0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i){
		s[i] = c;
	}

	s[i] = '\0';
	return i;
}
