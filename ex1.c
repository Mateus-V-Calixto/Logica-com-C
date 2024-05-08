/*Elabore um programa que leia dois números e faça todas as operações
matemáticas aritméticas ( -,+, *, /*/

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("qual o primeiro numero ?");
    scanf("%d", &n1);
    printf("\nqual o segundo numero ? ");
    scanf("%d", &n2);
    printf("\nadicao %d + %d = %d \n", n1, n2, n1 + n2);
    printf("subtracao %d - %d = %d \n", n1, n2, n1 - n2);
    printf("divisao %d / %d = %f \n", n1, n2, n1 / n2);
    printf("multiplicao %d x %d = %d \n", n1, n2, n1 * n2);
    return 0;
}