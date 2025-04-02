#include<stdio.h>
#include "06 - substring função (PT).c"

void main(){
    char texto[100], destino[100];
    printf("Informe uma string: ");
    gets (texto);

    substring(texto, destino, 3, 8);
    printf("\n%s", destino);
}
