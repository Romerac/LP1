#include<stdio.h>
#include "substring.c"

void main(){
    char texto[100], destino[100];
    printf("Informe uma string: ");
    gets (texto);

    substring(texto, destino, 3, 8);
    printf("\n%s", destino);
}
