#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float distancia, volume, consumo;
    
    printf("Vamos calcular o consumo m�dio do seu ve�culo:\n");
    
    printf("Digite a dist�ncia percorrida:\n");
    scanf("%f", &distancia);
    
    printf("Agora digite o volume de combust�vel gasto nesse percurso:\n");
    scanf("%f", &volume);
    
    consumo = distancia / volume;
    
    printf("O consumo m�dio do seu ve�culo � aproximadamente:\n%.2f km/Litro", consumo);
    
    
}
