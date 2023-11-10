#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tamanho = 1500;
    int *vetor = calloc(tamanho, sizeof(int));
 
    if (vetor == NULL) {
        printf("Erro.\n");
        return 1;
    }
 
    int zeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            zeros++;
        }
    }
 
    printf("O vetor foi inicializado com %d zeros.\n", zeros);
 
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }
 
    printf("10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
 
    printf("10 ultimos elementos do vetor:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
 
    free(vetor);
 
    return 0;
}