/*5. Elabore um programa que calcule a autonomia de consumo pela distância
percorrida (autonomia = (distância percorrida em quilômetros / quantidade
de litros consumidos).*/

#include <stdio.h>
int main()
{
    int litro, kmPercorridos;
    float autonomia;
    printf("Quantos km voce percorreu?");
    scanf("%d", &kmPercorridos);
    printf("Quantos litros voce gastou?");
    scanf("%d", &litro);
    if (litro <= 0 || kmPercorridos <= 0)
    {
        printf("Dados invalidos, voce tem que percorrer e gastar para calcular a autonomia");
    }
    else
    {
        autonomia = kmPercorridos / litro;
        printf("Sua autonomia foi de %f km por litro",
               autonomia);
    }
    return 0;
}
