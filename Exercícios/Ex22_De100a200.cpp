#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt;
    
    cnt = 100;
    while (cnt <= 200){
    	printf("%i\n", cnt);
    	cnt++;
	}
	return(0);
}
