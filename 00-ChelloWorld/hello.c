#include <stdio.h>

int main(void)
{
    FILE *archivo;
    archivo = stdout;
    fprintf(archivo, "Hello World!");
}