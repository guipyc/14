[Monday 8:30 AM] JÚLIA VILELA CINTRA GALVÃO
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tamanho, numero;
 
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
 
    int *vetor = malloc(tamanho * sizeof(int));
 
    if (vetor == NULL) {
        printf("Erro.\n");
        return 1;
    }
 
    printf("Digite os valores dentro do vetor:\n");
 
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
 
    printf("Digite um numero para encontrar seus multiplos: ");
    scanf("%d", &numero);
 
    int multiplos = 0;
 
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % numero == 0) {
            multiplos++;
        }
    }
 
    printf("Quantidade de multiplos de %d no vetor: %d\n", numero, multiplos);
 
    free(vetor);
 
    return 0;
}