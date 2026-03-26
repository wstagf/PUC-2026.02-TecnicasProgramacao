#include <stdio.h>

float soma(float n1, float n2) {
    return n1 + n2;
}

int main(int argc, char const *argv[])
{   
    float num1, num2, resultado;

    printf("Digite o primeiro numero");
    scanf("%f", &num1);

    printf("Digite o segundo numero");
    scanf("%f", &num2);

    resultado = soma(num1, num2);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
