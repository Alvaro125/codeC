/*Faça um algoritmo que calcule e mostre a área de um losango. Dica: sabe-se que: Área
= (diagonal maior * diagonal menor) /2*/
#include <stdio.h>
int main(){
    double d1,d2,area;
    printf("Digite o valor da diagonal: ");
    scanf("%lf", &d1);
    printf("Digite o valor da outra diagonal: ");
    scanf("%lf", &d2);
    area = d1*d2/2;
    printf("Area do Losango eh %lf", area);
    return 0;
}
