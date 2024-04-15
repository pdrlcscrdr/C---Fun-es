#include<stdio.h>
#include<locale.h>
//Protótipo da função
int f(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	//Solicitação de um número
	do{
		printf("Digite um número inteiro maior que zero: \n");
		scanf("%i", &x);
	}while (x <= 0);
	//Chamada da função (dentro da resposta)
	printf("O fatorial de %i é: %i", x, f(x));
	return(0);
}
//Definição da função
int f(int x){
	int i, fat = 1;
	for(i = 1; i <= x; i++){
		fat *= i;
	}
	return(fat);
}
