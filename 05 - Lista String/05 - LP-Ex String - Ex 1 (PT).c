#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char palavra[10], vogais[5]={'a','e','i','o','u'}, letra;
    int contadorVogais = 0;

    printf("Digite uma palavra: ");
    gets(palavra);

    fflush(stdin); //clean buffer

    printf("Digite qualquer letra para substituir TODAS as vogais da palavra: ");
    scanf(" %c", &letra);

    //Calculando quantas vogais
    for(int i=0; palavra[i]!='\0'; i++){
    //if (tolower (palavra[i])=='a' ||  tolower (palavra[i])=='e' ||  tolower (palavra[i])=='i' ||  tolower (palavra[i])=='o' ||  tolower (palavra[i])=='u')
        for(int j=0; j<5; j++){
            if (tolower (palavra[i])==vogais[j]){
                contadorVogais++;
                palavra[i] = letra;
                break;
            }
        }
    }   printf("\Vowels quantity %d", contadorVogais);
        printf("\nWord: %s", palavra);
}
