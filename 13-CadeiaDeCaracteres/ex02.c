
//EX02 – Copiar string manualmente

int contarCaracteres(char str[]) {
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void copiarString(char origem[], char destino[]) {
    int qtdCarateresOrigem = contarCaracteres(origem);

    for (int i = 0; i<= qtdCarateresOrigem; i++) {
        destino[i] = origem[i];
    };
}

int main() {
    char str[] = "PUC Universidade";
    int quantidade = contarCaracteres(str);
    printf("Exitem %d caracteres\n", quantidade);



    char copiada[] = "123456";
    copiarString(str, copiada );
    printf("%s", copiada);

    return 0;
}