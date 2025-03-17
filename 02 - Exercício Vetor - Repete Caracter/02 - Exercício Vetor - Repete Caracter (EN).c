#include <stdio.h>

void main (){

    int vectorInt[6];
    char vectorChar[6];

    printf("First, complete all vector spaces with numbers\n");
    for(int i=0;i<6;i++)
        scanf("%d", &vectorInt[i]);
    printf("Now, choose how many times you want this number to appear on the screen.\n");
    for(int i=0;i<6;i++)
        scanf(" %c", &vectorChar[i]);

    for (int i=0;i<6;i++){
        printf("\n");
        for (int x=0;x<vectorInt[i];x++){
            printf("%c", vectorChar[i]);
        }printf("\n");
    }
}
