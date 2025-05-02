#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // tabuleiro 10x10
    int tabuleiro[10][10];
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // inicializa o tabuleiro como 0s
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // navios (tamanho fixo 3)
    int navio[3] = {3, 3, 3};

    // posicionamento navio

    // horizontal
    int linha_h = 4, coluna_h = 2;
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_h][coluna_h + i] = navio[i];
    }

    // vertical
    int linha_v = 5, coluna_v = 7;
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_v + i][coluna_v] = navio[i];
    }

    // diagonal 1
    int linha_d1 = 0, coluna_d1 = 0;
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_d1 + i][coluna_d1 + i] = navio[i];
    }

    // diagonal 2
    int linha_d2 = 0, coluna_d2 = 9;
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_d2 + i][coluna_d2 - i] = navio[i];
    }

    // exibição
    printf(" ");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1); // cabeçalho colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]); // nome linha
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
