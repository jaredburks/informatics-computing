/*
 * LP4_ReverseCase.c
 *
 *  Created on: Oct 13, 2020
 *      Author: burksj
 */
#include <stdio.h>
#define STRLEN 200



int strlen(char a[STRLEN]);



int isUpper(char a);



char reverseCase(char a);



int main(void)
{



    int i;



    char a[STRLEN];
    scanf("%s",a);
    for (i=0;i<strlen(a);i++)
    {
        printf("%c", reverseCase(a[i]));
    }



    return 0;
}



char reverseCase(char a){
        if(isUpper(a)){
            a = a + 32;
        } else{
            a = a - 32;}



        return a;}



int isUpper(char a){
    int n;
        if ((a >= 65) && (a <= 90)){
            n = 1;
        } else{
            n = 0;}
        return n;
}
