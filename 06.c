#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int *memoria = NULL;
    int tamanho_memoria = 0;
 
    printf("Digite o tamanho da memória (em bytes, múltiplo de sizeof(int)): ");
    scanf("%d", &tamanho_memoria);
 
    if (tamanho_memoria % sizeof(int) != 0) {
        printf("O tamanho da memória deve ser um múltiplo de sizeof(int).\n");
        return 1;
    }
 
    memoria = (int *)malloc(tamanho_memoria);
 
    if (memoria == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
 
    int opcao;
    int posicao, valor;
 
    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir um valor em uma posição\n");
        printf("2. Consultar um valor em uma posição\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
 
        switch (opcao) {
            case 1:
                printf("Digite a posição (0 a %d): ", tamanho_memoria / sizeof(int) - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= tamanho_memoria / sizeof(int)) {
                    printf("Posição inválida.\n");
                } else {
                    printf("Digite o valor: ");
                    scanf("%d", &valor);
                    memoria[posicao] = valor;
                }
                break;
            case 2:
                printf("Digite a posição (0 a %d): ", tamanho_memoria / sizeof(int) - 1);
                scanf("%d", &posicao);
                if (posicao < 0 || posicao >= tamanho_memoria / sizeof(int)) {
                    printf("Posição inválida.\n");
                } else {
                    printf("Valor na posição %d: %d\n", posicao, memoria[posicao]);
                }
                break;
            case 3:
                free(memoria);
                printf("Memória liberada. Saindo...\n");
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }
}