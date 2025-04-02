#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char palavra[10], letra;
    int tamanhoDoVetor=0, tamanhoDaPalavra, count=0;

    printf("Digite qualquer frase: \n");
    gets(palavra);

    printf("\nEscolha um caracter: \n");
    scanf(" %c", &letra);

    tamanhoDaPalavra = strlen(palavra);

    for(int i=0; i<tamanhoDaPalavra; i++){
        if (tolower (palavra[i])==tolower(letra)){
            tamanhoDoVetor++;
        }
    }

    int vector[tamanhoDoVetor];

    for(int i=0; i<tamanhoDaPalavra; i++){
        if (tolower (palavra[i]) == tolower(letra)){
            vector[count] = i;
            count++;
        }
    }

    printf("\nPosicoes em que o caracter ''%c'' foi encontrado\n", letra);
    for (int i=0;i<tamanhoDoVetor; i++){
        printf("%d ", vector[i]);
    }printf("\n\n\n\n\n");
}
