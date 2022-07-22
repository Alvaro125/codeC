/*Receba o preço de um produto, aplique um desconto de 10% nesse preço e mostre o
novo preço.*/
#include <stdio.h>
#include <math.h>
int main(){
    float p,d,pf;
    scanf("%f", &p);
    d = p/10;
    pf = p-d;
    printf("%f",pf);
    return 0;
}
