/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 12% e os impostos de 45%, preparar um
algoritmo para ler o custo de fábrica do carro e imprimir o custo ao consumidor.*/
#include <stdio.h>
int main(){
    float cf, imp, dis, consu;
    scanf("%f", &cf);
    imp = cf*45/100;
    dis = cf*12/100;
    consu = cf+imp+dis;
    printf("custo ao consumidor: %f", consu);
    return 0;
}
