#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt = 1, aprov = 0, reprov = 0;
    float nota, soma = 0, media;
    
    while (cnt <= 10){
    	
    	printf("Digite a nota do aluno:\n");
    	scanf("%f", &nota);
    
    	if (nota >= 60){
   			aprov++;
   		}
    	else{
    		reprov++;
		}
		soma += nota;
		cnt++;		
	}
	media = soma / 10;
	printf("A média das notas dos alunos é: %.2f\n", media);
	printf("O número de alunos aprovados é: %i\n", aprov);
	printf("O número de alunos reprovados é: %i\n", reprov);
	
	return(0);
}
    
