#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char word[10], letter;
    int vectorSize=0, wordSize, count=0;

    printf("Type any string: ");
    gets(word);

    printf("Type any character: ");
    scanf(" %c", &letter);

    wordSize = strlen(word);

    for(int i=0; i<wordSize; i++){
        if (tolower (word[i])==tolower(letter)){
            vectorSize++;
        }
    }

    int vector[vectorSize];

    for(int i=0; i<wordSize; i++){
        if (tolower (word[i]) == tolower(letter)){
            vector[count] = i;
            count++;
        }
    }

    printf("\nIndices where the character ''%c'' occurs\n", letter);
    for (int i=0;i<vectorSize; i++){
        printf("%d ", vector[i]);
    }printf("\n\n\n\n\n");
}
