1 : #include<stdio.h>

#define SIZE 10

    void
    bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Troca arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[SIZE];
    int i;

    // Lê 10 números do usuário
    printf("Digite 10 números:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ordena o array usando Bubble Sort
    bubbleSort(arr, SIZE);

    // Exibe o array ordenado
    printf("\nArray ordenado:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("o menor valor foi colocado na primeira posicao e o valor e: %d", arr[0]);

    return 0;
}

2.

#include <stdio.h>
    int
    main()
{
    int A[15];
    int posicao10;
    printf("Digite os elementos do vetor A (tamanho 1 a 15):\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (A[i] == 10)
        {
            posicao10 = i;
            printf("O número 10 foi encontrado na posição %d do vetor A.\n", posicao10 + 1);
        }
    }
    return 0;
}

3
#include <stdio.h>
    int
    main()
{
    float vetor[20];
    printf("Digite 10 valores reais para o vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);
    }
    for (int i = 10; i < 20; i++)
    {
        vetor[i] = vetor[19 - i];
    }
    printf("\nVetor completo:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", vetor[i]);
    }
    return 0;
}

4.

#include <stdio.h>
    int
    main()
{
    int vetor[10];
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("\nNúmeros na ordem inversa:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

5.

#include <stdio.h>
#include <string.h>
    int
    main()
{
    char nomes[10][50];
    char nome[50];
    printf("Digite 10 nomes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%dº nome: ", i + 1);
        fgets(nome, sizeof(nome), stdin);
        strcpy(nomes[i], nome);
    }
    printf("\nLista de nomes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s", nomes[i]);
    }
    return 0;
}

6.

#include <stdio.h>
    char tabuleiro[3][3];
void desenhaTabuleiro()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
int verificaVencedor(char simbolo)
{
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == simbolo && tabuleiro[i][1] == simbolo && tabuleiro[i][2] == simbolo)
            return 1;
        if (tabuleiro[0][i] == simbolo && tabuleiro[1][i] == simbolo && tabuleiro[2][i] == simbolo)
            return 1;
    }
    if (tabuleiro[0][0] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][2] == simbolo)
        return 1;
    if (tabuleiro[0][2] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][0] == simbolo)
        return 1;
    return 0;
}
int main()
{
    char jogarNovamente;
    do
    {
        int linha, coluna, jogadas = 0;
        char jogador = 'X';
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                tabuleiro[i][j] = ' ';
        while (jogadas < 9)
        {
            desenhaTabuleiro();
            printf("\nJogador %c, digite a linha e a coluna: ", jogador);
            scanf("%d %d", &linha, &coluna);
            linha--;
            coluna--;
            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ')
            {
                printf("Jogada inválida!\n");
                continue;
            }
            tabuleiro[linha][coluna] = jogador;
            jogadas++;
            if (verificaVencedor(jogador))
            {
                printf("Jogador %c venceu!\n", jogador);
                break;
            }
            jogador = (jogador == 'X') ? 'O' : 'X';
        }
        if (jogadas == 9)
            printf("Empate!\n");
        desenhaTabuleiro();
        printf("\nDeseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente);
    } while (jogarNovamente == 'S' || jogarNovamente == 's');
    return 0;
}
