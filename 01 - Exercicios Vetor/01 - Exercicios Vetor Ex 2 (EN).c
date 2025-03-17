#include <stdio.h>

int main(){
  int vectorA[25];
  int vectorB[25];
  int vectorC[50];
  int x=0;

  for (int i=0;i<=24;i++){
    printf("Enter the value to be added at this new position in the array: ");
    scanf("%d", &vectorA[i]);
  }
  for (int i=0;i<=24;i++){
    printf("Now, let's move to the other array. Enter the value to be added at this new position in the array: ");
    scanf("%d", &vectorB[i]);
  }

  for (int i=0;i<=49;i++){
    vectorC[i] = vectorA[i] + vectorB[i];
    printf("%d\n", &vectorC[i]);
  }
}
