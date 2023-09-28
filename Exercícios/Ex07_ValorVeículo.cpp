#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float custo, distribuidora, impostos, total;
    
    printf("Digite o custo de fabricação do veículo:\n");
    scanf("%f", &custo);
    
    distribuidora = custo * 0.12;
    impostos = custo * 0.45;
    total = custo + distribuidora + impostos;
    
    printf("O valor recebido pela distribuidora é:\n R$ %.2f \n", distribuidora);
    printf("O valor arrecadado em impostos é:\n R$ %.2f \n" , impostos);
    printf("O valor total a ser pago pelo veículo é:\n R$ %.2f \n", total);
    
}

