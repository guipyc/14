#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tamanho;
 
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
 
    int *vetor = malloc(tamanho * sizeof(int));
 
    if (vetor == NULL) {
        printf("Erro.\n");
        return 1;
    }
 
    printf("Digite os valores dentro do vetor:\n");
    int pares = 0;
    int impares = 0;
 
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
 
    printf("Valores pares: %d\n", pares);
    printf("Valores impares: %d\n", impares);
 
    free(vetor);
 
    return 0;
}