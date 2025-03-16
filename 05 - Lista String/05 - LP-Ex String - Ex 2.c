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
    //if (tolower (palavra[i])=='a' ||  tolower (palavra[i])=='e' ||  tolower (palavra[i])=='i' ||  tolower (palavra[i])=='o' ||  tolower (palavra[i])=='u')
        if (tolower (palavra[i]) == tolower(letra)){
            qtdeLetra++;         //Entre com um caractere (vogal ou consoante) e substitua
                                 //todas as vogais da palavra dada por esse caractere.
        }
    }   printf("\nQtde total de letras '%c': %d\n", letra, qtdeLetra);
}
