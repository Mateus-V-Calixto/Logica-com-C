/*Elabore um programa que calcule a autonomia de consumo, ou seja,
cálculo do consumo médio, pela fórmula: (autonomia = (distância
percorrida em quilômetros / quantidade de litros consumidos*/

#include <stdio.h>

int main()
{
    int combustivel, km, autonomia;
    printf("seja bem vindo ao comando de bordo, quantos litros de combustivel voce colocou?\n");
    scanf("%d", &combustivel);
    printf("Quantos km voce percorreu?\n");

    autonomia = (km / combustivel);
    printf("A autonomia foi de %dkm por litro", autonomia);
}