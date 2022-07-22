/*Receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/
#include <stdio.h>
int main(){
    double peso, gramas;
    scanf("%lf", &peso);
    gramas = peso *1000;
    printf("%.3lf Kg = %.0lf g", peso, gramas);
    return 0;
}
