/*Preparar um algoritmo para executar a seguinte conversão: ler uma temperatura dada
na escala Celsius e imprimir a equivalente em Fahrenheit (fórmula de conversão: ºF =
9/5 x ºC + 32).*/
#include <stdio.h>
int main(){
    float c,f;
    printf("digite um valor em Celcius: ");
    scanf("%f", &c);
    f = 9.0/5*c+32;
    printf("%fC = %fF", c,f);
    return 0;
}
