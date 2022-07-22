/*Um funcionário recebe todo mês um salário fixo mais 4% de comissão sobre as suas
vendas. Faça um algoritmo que receba o salário fixo de um funcionário e o valor de
suas vendas, calcule e mostre a comissão e o salário final do funcionário.*/
#include <stdio.h>
#include <math.h>
int main(){

    double sfixo,co,vendas, sfinal;
    scanf("%lf%lf", &sfixo, &vendas);
    co = vendas*4/100;//comissao
    sfinal = co+sfixo;//salario final
    printf("comissao:%.1lf\nSalario:%.1lf",co, sfinal);
    return 0;
}

