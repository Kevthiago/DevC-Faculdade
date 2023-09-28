#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float distancia, volume, consumo;
    
    printf("Vamos calcular o consumo médio do seu veículo:\n");
    
    printf("Digite a distância percorrida:\n");
    scanf("%f", &distancia);
    
    printf("Agora digite o volume de combustível gasto nesse percurso:\n");
    scanf("%f", &volume);
    
    consumo = distancia / volume;
    
    printf("O consumo médio do seu veículo é aproximadamente:\n%.2f km/Litro", consumo);
    
    
}
