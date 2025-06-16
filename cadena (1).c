#include <stdio.h>
#include <string.h>

int main() {
    char cad[10];
    int longitud;
    int i;
    int j;

    printf("Introduce una palabra: \n");
    gets(cad);  

    longitud = strlen(cad);

    for (i = 0; i < longitud; i++) {
        for (j = 0; j < longitud; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}