#include <stdio.h>
#include<locale.h>
//Protótipo da função
void pnn(int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	//Solicitando um valor ao usuário
	printf("Digite um valor inteiro: ");
	scanf("%i", &x);
	//Chamada da função
	pnn(x);
	return(0);
}
//Definição da função
void pnn(int i){
	if(i > 0){
		printf("%i é positivo.", i);
	}
	else if(i < 0){
		printf("%i é negativo.", i);
	}
	else{
		printf("%i é neutro.", i);
	}
}
