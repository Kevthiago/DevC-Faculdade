#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int cnt = 0, num, soma = 0, soma2 = 0, par = 0, imp = 0;
	float mediapar = 0, mediaimp = 0;
	
	for (cnt = 0; cnt < 5; cnt ++){
		
		printf("Digite um n�mero inteiro:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if (num % 2 == 0){
				soma += num;
				par++;
				
			} else {
				soma2 += num;
				imp++;
			}
		} else {
			cnt--;
		}
	}
	if (par > 0)
	   mediapar = float(soma) / float(par);
	
	if (imp > 0)
	   mediaimp = float(soma2) / float(imp);
	   
	printf("A m�dia dos n�meros pares �: %.2f\n", mediapar);
	printf("A m�dia dos n�meros �mpares �: %.2f\n", mediaimp);
}
