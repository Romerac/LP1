#include <stdio.h>

void main() {
    int VectorLenght, CountEscadinha = 1, Calculation, LastCalculation;                //There will always be at least 1 Escadinha.

    printf("Type the total number of spaces in the vector.\n");
    scanf("%d", &VectorLenght);

    int VectorEscadinha[VectorLenght];

    printf("\nType all the numbers to fulfill the vector.\n");
    for (int i=0; i<VectorLenght;i++)
        scanf("%d", &VectorEscadinha[i]);

    LastCalculation = VectorEscadinha[1] - VectorEscadinha[0];

    for (int i=1;i<VectorLenght-1;i++) {                                                                   //Starts with 1 because we already did the first position in the line above
        Calculation = VectorEscadinha[i + 1] - VectorEscadinha[i];

        if (Calculation != LastCalculation) {
            CountEscadinha++;
            LastCalculation = Calculation;
        }
    }printf("\nThe total number of Escadinhas is: %d\n", CountEscadinha);

}
