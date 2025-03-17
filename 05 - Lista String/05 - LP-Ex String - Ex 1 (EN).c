#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
    char word[10], vowels[5]={'a','e','i','o','u'}, letter;
    int countVowels = 0;

    printf("Type a word: ");
    gets(word);

    fflush(stdin); //clean buffer

    printf("Type any letter to replace all vowels in the vector: ");
    scanf(" %c", &letter);

    //Calculate how many vowels
    for(int i=0; word[i]!='\0'; i++){
    //if (tolower (word[i])=='a' ||  tolower (word[i])=='e' ||  tolower (word[i])=='i' ||  tolower (word[i])=='o' ||  tolower (word[i])=='u')
        for(int j=0; j<5; j++){
            if (tolower (word[i])==vowels[j]){
                countVowels++;
                word[i] = letter; //Enter a character (vowel or consonant) and replace
                break;            //all the vowels in the given word with that character.
            }
        }
    }   printf("\Vowels quantity %d", countVowels);
        printf("\nWord: %s", word);
}
