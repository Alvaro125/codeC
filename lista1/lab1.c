/*Receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, mas não se preocupe em testar se
o segundo número é zero.*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,r;
    scanf("%f%f", &a,&b);
    r = a/b;
    printf("%f",r);
    return 0;
}
