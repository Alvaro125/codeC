/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre: a) o novo peso
que a pessoa terá se engordar 15% sobre o peso digitado; b) o novo peso que a
pessoa terá se emagrecer 20% sobre o peso digitado.*/
#include <stdio.h>
#include <math.h>

int main(){

    double peso, maisPeso, menosPeso;
    scanf("%lf", &peso);
    maisPeso = peso+(peso*15/100);
    menosPeso = peso-(peso*20/100);
    printf("Mais 15%%:%.1lf\nMenos 20%%:%.1lf",maisPeso, menosPeso);
    return 0;
}

