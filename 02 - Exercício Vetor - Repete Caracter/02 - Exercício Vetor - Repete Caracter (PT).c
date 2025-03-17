#include <stdio.h>

void main (){

    int vetorInt[6];
    char vetorChar[6];

    printf("Primeiro, preencha todos os espaços do vetor com um numero qualquer: \n");
    for(int i=0;i<6;i++)
        scanf("%d", &vetorInt[i]);
    printf("Agora, escolha a quantidade de vezes que esse numero devera aparecer na tela: \n");
    for(int i=0;i<6;i++)
        scanf(" %c", &vetorChar[i]);

    for (int i=0;i<6;i++){
        printf("\n");
        for (int x=0;x<vetorInt[i];x++){
            printf("%c", vetorChar[i]);
        }printf("\n");
    }
}
