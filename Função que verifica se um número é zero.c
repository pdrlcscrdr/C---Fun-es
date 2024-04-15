#include<stdio.h>
#include<locale.h>
//Protótipo da função
void zon(int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	//Solicitação de um valor ao usuário
	printf("Digite um valor inteiro: \n");
	scanf("%i", &x);
	//Chamada da função
	zon(x);
	return(0);
}
//Definição da função
void zon(int i){
	if(i != 0){
		printf("%i não é igual a zero.", i);
	}
	else{
	("0 é igual a zero.");
	}
}
