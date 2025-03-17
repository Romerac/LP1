#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char word[10], letter;
    int letterQty = 0;

    printf("Type any word ");
    gets(word);

    fflush(stdin); //clean buffer

    printf("Choose any letter from the chosen word: ");
    scanf(" %c", &letter);

    //Calculate how many times the chosen letter repeats.
    for(int i=0; word[i]!='\0'; i++){
        if (tolower (word[i]) == tolower(letter)){
            letterQty++;
        }
    }   printf("\nQtde total de letras '%c': %d\n", letter, letterQty);
}
