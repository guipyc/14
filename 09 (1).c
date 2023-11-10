#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int linhas, colunas;
 
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
 
    double **matriz = (double **)malloc(linhas * sizeof(double *));
    if (matriz == NULL) {
        printf("Falha na alocação de memória para as linhas da matriz.\n");
        return 1;
    }
 
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (double *)malloc(colunas * sizeof(double));
        if (matriz[i] == NULL) {
            printf("Falha na alocação de memória para as colunas da matriz.\n");
            return 1;
        }
    }
 
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
 
    printf("Matriz lida:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
 
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
 
    return 0;
}