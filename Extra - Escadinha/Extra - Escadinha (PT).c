#include <stdio.h>

void main() {
    int tamanhoVetor, contadorEscadinha = 1, calculo, calculoAnterior;                //Sempre haverá ao menos uma escadinha.

    printf("Digite o tamanho total do vetor\n");
    scanf("%d", &tamanhoVetor);

    int vetorEscadinha[tamanhoVetor];

    printf("\nPreencha completamente o vetor com numeros: \n");
    for (int i=0; i<tamanhoVetor;i++)
        scanf("%d", &vetorEscadinha[i]);

    calculoAnterior = vetorEscadinha[1] - vetorEscadinha[0];

    for (int i=1;i<tamanhoVetor-1;i++) {                                                                   //Começa em um pois já fizemos o primeiro calculo na linha acima.
        calculo = vetorEscadinha[i + 1] - vetorEscadinha[i];

        if (calculo != calculoAnterior) {
            contadorEscadinha++;
            calculoAnterior = calculo;
        }
    }printf("\nO numero total de escadinhas eh: %d\n", contadorEscadinha);

}
