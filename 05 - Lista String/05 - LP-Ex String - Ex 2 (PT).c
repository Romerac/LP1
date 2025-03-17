#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char palavra[10], letra;
    int qtdeLetra = 0;

    printf("Digite uma palavra: ");
    gets(palavra);

    fflush(stdin); //limpar buffer

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    //Calcule quantas vogais
    for(int i=0; palavra[i]!='\0'; i++){
        if (tolower (palavra[i]) == tolower(letra)){
            qtdeLetra++;
        }
    }   printf("\nQtde total de letras '%c': %d\n", letra, qtdeLetra);
}
