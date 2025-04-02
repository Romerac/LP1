#include<stdio.h>
#include "substring.c"

void main(){
    char text[100], destiny[100];
    printf("Type any string: ");
    gets (text);

    substring(text, destiny, 3, 8);
    printf("\n%s", destiny);
}
