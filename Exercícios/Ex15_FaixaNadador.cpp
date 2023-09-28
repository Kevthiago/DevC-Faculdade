#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    printf("Digite a sua idade e veja qual é a sua categoria como nadador :\n");
    scanf("%i", &idade);
    
    if ( idade >= 5 && idade <= 12 ){
    	printf("Categoria 'Infantil'");
	} else if ( idade >= 13 && idade <= 17 ) {
		printf("Categoria 'Juvenil'");
	} else if ( idade >= 18 && idade <= 25 ){
		printf("Categoria 'Profissional'");
	} else {
		printf("Fora da faixa.");
	}
}
