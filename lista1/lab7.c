/*Faça um algoritmo que calcule e mostre a área de um quadrado. Dica: sabe-se que:
Área = Lado * Lado*/
#include <stdio.h>
int main(){
    double area,l;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &l);
    area = l*l;
    printf("area do quadrado eh %.2lf", area);
    return 0;
}

