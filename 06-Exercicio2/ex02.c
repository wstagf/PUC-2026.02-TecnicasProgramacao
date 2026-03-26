#include <stdio.h>
// Um cliente comprou um apartamento por:

//     R$ 120.000,00
//     Data: 26/02/2026
//     Parcelado em: 360 meses 
//                   (30 anos)

//     Simular as 360 parcelas

float calcular_valor_parcela (float vlr_total, int parc){
    return vlr_total / parc;
}


void imprimir_parcelas(int qtd_parcelas,float valor_parcela)
{
    for (int i = 1; i <= qtd_parcelas; i++)
    {
        printf("----------------------------------- \n");
        printf("A parcela de numero %d \n", i);
        printf("e o valor dela eh R$ %.2f \n", valor_parcela );
        printf("----------------------------------- \n");
    }
}



int main() {
    float valor_total = 120000;
    int qtd_parcelas = 360;
    float valor_parcela = calcular_valor_parcela(valor_total, qtd_parcelas);
    imprimir_parcelas(qtd_parcelas,valor_parcela);
    
}




