#include <stdio.h>

float calcularPotencia(float numeroBase, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return 
            numeroBase
             * 
            calcularPotencia( 
                numeroBase, 
                expoente -1);
    }
}

int main() {

    // vamos fazer um
    // potenciacao
    // 2 elevado a 3

    float valor_exp = calcularPotencia(4, 3);
    printf("valor_exp eh %.2f \n", valor_exp );


    

    return 0;
}