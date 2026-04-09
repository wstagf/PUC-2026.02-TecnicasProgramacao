
// EX01 – Criar função que conte quantos 
// caracteres existem em uma string 
// sem utilizar strlen().

#include <stdio.h>
#include <string.h>

int contarCaracteres(char str[]) {
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main() {
    char str[] = "PUC";
    // if(str[11] == '\0') {
    //     printf("final da palavra");
    // } else {
    //     printf("%c", str[11]);
    // }

    int quantidade = contarCaracteres(str);

    printf("Exitem %d caracteres", quantidade);
    //printf("Tamanho: %zu\n", strlen(str)); 
    return 0;
}