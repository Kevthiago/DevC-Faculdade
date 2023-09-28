#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt;
    
    cnt = 0;
    while (cnt <= 100){
    	printf("%i\n", cnt);
    	cnt++;
	}
	return(0);
}
