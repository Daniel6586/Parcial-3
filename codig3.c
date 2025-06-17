#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;
    int x, i;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    ptr = (int *)malloc(x * sizeof(int));
    for (i = 0; i < x; i++) {
        printf("Ingrese el valor para la posición %d: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Valores del arreglo:\n");
    for (i = 0; i < x; i++) {
        printf("arreglo[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}