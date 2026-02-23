void somar(a, b) {
    printf("A soma de %d e %d é %d\n", a, b, a + b);
}

int somarEGuardar(a, b) {
    return a + b;
}


int main() {
    printf("Hello,World!\n");
    somar(5, 10);

    int resultado = somarEGuardar(5, 10);
    printf("O resultado guardado é %d\n", resultado);

    return 1;
}

