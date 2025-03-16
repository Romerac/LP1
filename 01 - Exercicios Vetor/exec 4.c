#include <stdio.h>
#include <math.h>

int main(){
    int QtdeLamp, QtdeComodo, Class;
    float AreaComodo, PotIlum, TotLamp, TotPotIlum;

    printf("Digite a quantidade de comodos");
    scanf("%f", &QtdeComodo);

  for (int i=0;i<=QtdeComodo;i++){
    printf("Digite a Area do comodo");
    scanf("%f", &AreaComodo);
    printf("Digite a classe do comodo");
    scanf("%d", &Class);
    PotIlum = AreaComodo*Class;
    QtdeLamp = PotIlum/60;

}

