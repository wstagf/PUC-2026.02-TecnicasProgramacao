#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[50] = "Thiago";
    printf("Tamanho: %lu \n", strlen(nome));

    char nome2[50];
    
    // strcpy(destino, origem)
    // copia o conteudo da variavel de origem no destino
    strcpy(nome2, nome );

    printf(nome2);



    // comparar strings
    char str1[] = "thiago111";
    char str2[] = "123456a";

    int comparacao = strcmp(str1, str2);
    // printf(comparacao);

    char myStr1[] = "ABCD";
    char myStr2[] = "ABCE";
    int cmp = strcmp(myStr1, myStr2);
    if (cmp > 0) {
    printf("%s is greater than %s\n", myStr1, myStr2);
    } else if (cmp < 0) {
    printf("%s is greater than %s\n", myStr2, myStr1);
    } else {
    printf("%s is equal to %s\n", myStr1, myStr2);
    }




    char cidade[] = "Goiânia \n"; 
    char bairro[] = "Centro, ";
    char rua[] = "Avenida Goias, ";


    // concatenar strings... juntar uma com a outra
    char xxx = "Avenida Goias, Centro - Goiânia";

    char enderecoCompleto[] = "";

    strcat(enderecoCompleto, rua);
    strcat(enderecoCompleto, bairro);
    strcat(enderecoCompleto, cidade);
    printf(enderecoCompleto);


    char email[] = "xxxxx@gmail.com";
    
    if(strstr(email, "@")) {
        if(strstr(email, ".")) {
        printf("email valido");
        } else {
            printf("email invalido");\
        }
    } else {
        printf("email invalido");\
    }


    return 0;
}