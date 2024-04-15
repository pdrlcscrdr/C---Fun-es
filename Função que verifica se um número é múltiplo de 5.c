#include <stdio.h>
#include<locale.h>
//Protótipo da função
void m5(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	//Solicitando um valor ao usuário
	printf("Digite um valor inteiro: ");
	scanf("%i", &i);
	//Chamada da função
	m5(i);
	return(0);
}
//Definição da função
void m5(int x){
	if(x % 5 != 0){
		printf("%i não é múltiplo de 5.", x);
	}
	else{
		printf("%i é múltiplo de 5.", x);
	}
}
	
