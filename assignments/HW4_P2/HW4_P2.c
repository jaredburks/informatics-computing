/*
 * HW4_P2.c
 *
 *  Created on: Oct 28, 2020
 *      Author: burksj
 */


#include<stdio.h>

int atoi(char s[]);

int atoi(char s[]){
	int i, n = 0;

	if(s[0] == '-'){
		for(i = 1; s[i] >= '0' && s[i]<= '9'; i++){
			n = n * 10 + (s[i] - '0');
		}
		n *= -1;
	}
	else if(s[0] == '+'){
		for(i = 1; s[i] >= '0' && s[i]<= '9'; i++){
			n = n * 10 + (s[i] - '0');
		}
	}
	else{
		for(i = 0; s[i] >= '0' && s[i]<= '9'; i++){
			n = n * 10 + (s[i] - '0');
		}
	}

	return n;
}

int main(void){
	char s[100];
	int n;

	printf("Enteranumericstring:");
	fflush(stdout);
	scanf("%s",s);

	printf("Beforeconversion:%s\n",s);
	n=atoi(s);
	printf("Afterconversion:%d\n",n);

	return 0;
}
