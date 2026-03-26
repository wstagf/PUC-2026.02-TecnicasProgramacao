#include <stdio.h>

void trocar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10;
    int y = 20;

    printf("Antes da troca: \n");
    printf("x = %d, y = %d \n", x, y);

    // troca de posicao utilizando ponteiro
    trocar(&x, &y);

    printf("Depois da troca: \n");
    printf("x = %d, y = %d \n", x, y);
}