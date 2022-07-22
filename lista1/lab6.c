/*Faça um algoritmo que calcule e mostre a área de um trapézio. Dica: sabe-se que: Área
= ((base maior + base menor) * altura) /2*/
#include <stdio.h>
int main(){
    double area, b,c,h;
    printf("Digite base maior: ");
    scanf("%lf", &b);
    printf("Digite base menor: ");
    scanf("%lf", &c);
    printf("Digite altura: ");
    scanf("%lf", &h);
    area = (b+c)*h/2;
    printf("Area do trapezio eh igual a %.3lf", area);
    return 0;
}
