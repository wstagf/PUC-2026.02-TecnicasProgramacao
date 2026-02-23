#include <stdio.h> #include <stdlib.h> 

typedef struct { float altura; float largura; float area; } Retangulo; 

int main() { int n, i; 

printf("Quantos retangulos deseja cadastrar? "); 
scanf("%d", &n); 
 
Retangulo *retangulos = (Retangulo*) malloc(n * sizeof(Retangulo)); 
if (retangulos == NULL) { 
    printf("Erro de alocacao de memoria!\n"); 
    return 1; 
} 
 
for (i = 0; i < n; i++) { 
    printf("\nRetangulo %d:\n", i+1); 
    printf("Altura (m): "); 
    scanf("%f", &retangulos[i].altura); 
    printf("Largura (m): "); 
    scanf("%f", &retangulos[i].largura); 
     
    retangulos[i].area = retangulos[i].altura * retangulos[i].largura; 
} 
 
printf("\n========================================\n"); 
printf("LISTA DE RETANGULOS CADASTRADOS\n"); 
printf("========================================\n"); 
 
for (i = 0; i < n; i++) { 
    printf("%d. Altura: %.2f m | Largura: %.2f m | Area: %.2f m²\n", 
           i+1, retangulos[i].altura, retangulos[i].largura, retangulos[i].area); 
} 
 
free(retangulos); 
return 0; 
  

}