/*Elaborar um programa que entre com um número e imprima caso ele seja
maior de idade.*/

#include <stdio.h>
int main()
{
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Com %d anos voce é maior de idade", idade);
    }
    else
    {
        printf("Com %d anos voce é menor de idade", idade);
    }
    return 0;
}