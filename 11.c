#include <stdio.h>
#include <stdlib.h>
int main() {
    int *vetor = malloc(10 * sizeof(int));
    if (vetor == NULL) {
        printf("Erro.\n");
        return 1;
    }
    int tamanhoAtual = 10;
    int tamanhoReal = 0;
    printf("Digite uma sequencia de numeros ou 0 para encerrar.\n");
    int numero;
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (tamanhoReal == tamanhoAtual) {
            int *novoVetor = malloc((tamanhoAtual + 10) * sizeof(int));
            if (novoVetor == NULL) {
                printf("Erro.\n");
                return 1;
            }
            for (int i = 0; i < tamanhoAtual; i++) {
                novoVetor[i] = vetor[i];
            }
            free(vetor);
            vetor = novoVetor;
            tamanhoAtual += 10;
        }
        vetor[tamanhoReal] = numero;
        tamanhoReal++;
    }
    printf("Valores digitados:\n");
    for (int i = 0; i < tamanhoReal; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}