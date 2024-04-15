#include <stdio.h>
#include<locale.h>
//Protótipo da função
void i(int i);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int x;
	//Solicitando a idade do usuário
	printf("Informe a idade do usuário: ");
	scanf("%i", &x);
	//Chamada da função
	i(x);
	return(0);
}
//Definição da função
void i(int i){
	if(i >= 18){
		printf("O usuário é maior de idade.");
	}
	else{
		printf("O usuário é menor de idade.");
	}
}
