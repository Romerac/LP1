#include <stdio.h>
#include <ctype.h>
#include <string.h>


void strTransforma (char mensagem[], int tamanho, int meio){
    int contador=0;

    for (contador=0; contador < meio; contador++){
        mensagem[contador] = tolower (mensagem[contador]);
    }
    for (contador=meio; contador <= tamanho; contador++){
        mensagem[contador] = toupper (mensagem[contador]);
    }mensagem[contador]='\0';
}

void main (){

    int tamanho, meio, contador=0;
    char mensagem[100], primeraMetade[50], segundaMetade[50], mensagemFinal[100];


    printf("Digite uma palavra ou frase qualquer: \n");
    fgets(mensagem, 100, stdin);

    tamanho = strlen(mensagem);
    meio = tamanho/2;

    strTransforma(mensagem, tamanho, meio);

    for (int i=0; i < meio; i++){
        primeraMetade[i] = mensagem[i];
    }

    for (int i=meio; i <= tamanho; i++, contador++){
        segundaMetade[contador] = mensagem[i];
    }

    strcat(primeraMetade, segundaMetade);

    printf("\nA palavra ou frase transformada: \n%s\n", primeraMetade);
}
