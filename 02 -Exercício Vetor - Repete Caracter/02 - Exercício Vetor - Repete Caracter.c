#include <stdio.h>

void main (){

    int VectorInt[6], i, x;
    char VectorChar[6];

    printf("First, complete all vector spaces with numbers\n");
    for(i=0;i<6;i++)
        scanf("%d", &VectorInt[i]);
    printf("First, complete all vector spaces with characters\n");
    for(i=0;i<6;i++)
        scanf(" %c", &VectorChar[i]);



    for (i=0;i<6;i++){
        printf("\n");
        for (x=0;x<VectorInt[i];x++){
                printf("%c", VectorChar[i]);
        }printf("\n");
    }
}
