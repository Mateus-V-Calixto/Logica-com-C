/*4. Elaborar um programa que entre com o ano de nascimento de uma
pessoa e o ano atual. Imprimir a idade da pessoa. Não se esqueça de
verificar se o ano de nascimento é um ano válido.*/

#include <stdio.h> 
int main()
{
    int idade, anoAtual = 2024, anoNascimento;
    printf("Em que ano voce nasceu?");
    scanf("%d", &anoNascimento);
    idade = anoAtual - anoNascimento;
    if (anoNascimento > anoAtual)
    {
        printf("ano de nascimento invalido, voce nasceu no futuro? hihihi");
    }
    else
    {
        printf(" Voce tem %d anos", idade);
    }
    return 0;
}