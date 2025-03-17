#include <stdio.h>

int main(){
  int vetorA[25];
  int vetorB[25];
  int vetorC[50];
  int x=0;

  for (int i=0;i<=24;i++){
    printf("Digite o valor a ser adicionado nesta nova posiçao do vetor:");
    scanf("%d", &vetorA[i]);
  }
  for (int i=0;i<=24;i++){
    printf("Agora, vamos para o outro vetor. Digite o valor a ser adicionado nesta nova posiçao do vetor:");
    scanf("%d", &vetorB[i]);
  }

  for (int i=0;i<=49;i++){
    vetorC[i] = vetorA[i] + vetorB[i];
    printf("%d\n", &vetorC[i]);
  }
}
