#include <stdio.h>
#include<locale.h>

void m5(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("Digite um valor inteiro: ");
	scanf("%i", &i);
	m5(i);
	return(0);
}

void m5(int x){
	if(x % 5 != 0){
		printf("%i não é múltiplo de 5.", x);
	}
	else{
		printf("%i é múltiplo de 5.", x);
	}
}
	