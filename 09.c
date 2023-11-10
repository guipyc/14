#include <stdio.h>
#include <stdlib.h>
 
int valorNaMatriz(int **matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}
 
int main() {
    int linhas, colunas;
 
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);
 
    int **matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
 
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    int valorProcurado;
    printf("Digite o valor a ser procurado dentro da matriz: ");
    scanf("%d", &valorProcurado);
 
    int valorEncontrado = valorNaMatriz(matriz, linhas, colunas, valorProcurado);
 
    if (valorEncontrado) {
        printf("O valor %d foi encontrado na matriz.\n", valorProcurado);
    } else {
        printf("O valor %d nao foi encontrado na matriz.\n", valorProcurado);
    }
 
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
 
    free(matriz);
 
    return 0;
}