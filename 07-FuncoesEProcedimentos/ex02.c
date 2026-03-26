#include <stdio.h>
// Um cliente comprou um apartamento por:

//     R$ 120.000,00
//     Data: 26/02/2026
//     Parcelado em: 360 meses 
//                   (30 anos)

//     Simular as 360 parcelas

//     O contrato possui juros de 10% por ano.


// so serve para sem juros
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

float calcularSaldoDevdor(
    float saldoDevedorAnterior,
    float juros) {
    return saldoDevedorAnterior + (saldoDevedorAnterior * juros);
}



int main() {
    float saldo_devedor_inicial = 120000;
    float saldo_devedor_atualizado = 120000;
    int qtd_parcelas = 360;

    // float valor_parcela = calcular_valor_parcela(valor_total, qtd_parcelas);
    // imprimir_parcelas(qtd_parcelas,valor_parcela);

    float x = calcularSaldoDevdor(120000, 0.008333333333);

    printf("o valor atualizado e R$ %.2f \n",  x );


    
}








// totalDevido = 120.000
// pago1 = 1000 ... ~= 700 é juros.. 

// juros = ((1/12)*0,1) 
//       = 12000 ano, 
//       = 1k por mes
// SAldo devedor = 121k
// Paguei 1500 
// SAldo devedor = 119.500k


// juros = 119.500 * ((1/12)*0,1)
//         supomos que seja 980

//         119.500

// Paguei 1500 


// totalDevido = 120.000 + (juros*120.000) 
// totalDevido = 119.000 + 

