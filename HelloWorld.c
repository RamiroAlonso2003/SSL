#include <stdio.h>

int main() {
    printf("Hola Mundo\n");

    FILE *archivo;
    archivo = fopen("output.txt", "w");
    fprintf(archivo, "Hola Mundo");
    fclose(archivo);

    return 0;
}
