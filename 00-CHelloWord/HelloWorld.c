#include <stdio.h>
using namespace std;

int main() {
    printf("Hola Mundo");

    FILE *arch;
    archivo = fopen("output.txt", "w");
    fprintf(arch, "Hola Mundo");
    fclose(arch);

    return 0;
}
