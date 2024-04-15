#include <stdio.h>
#include<locale.h>
//Protótipo da função
void iop(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	//Solicitando um valor ao usuário
	printf("Digite um valor inteiro: ");
	scanf("%i", &i);
	//Chamada da função
	iop(i);
	return(0);
}
//Definição da função
void iop(int x){
	if(x % 2 != 0){
		printf("%i é ímpar.", x);
	}
	else{
		printf("%i é par.", x);
	}
}
