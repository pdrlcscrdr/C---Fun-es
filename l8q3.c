#include <stdio.h>
#include<locale.h>

void iop(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("Digite um valor inteiro: ");
	scanf("%i", &i);
	iop(i);
	return(0);
}

void iop(int x){
	if(x % 2 != 0){
		printf("%i é ímpar.", x);
	}
	else{
		printf("%i é par.", x);
	}
}