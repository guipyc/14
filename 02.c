#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tamanho;
 
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
 
    int *vetor = (int *)malloc(tamanho * sizeof(int));
 
    if (vetor == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
 
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
 
    printf("O vetor lido é: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
 
    free(vetor);
 
    return 0;
}