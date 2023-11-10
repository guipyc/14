#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int *array = malloc(5 * sizeof(int));
 
    if (array == NULL) {
        printf("Erro.\n");
        return 1;
    }
 
    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
 
    printf("Numeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }
 
    free(array);
 
    return 0;
}