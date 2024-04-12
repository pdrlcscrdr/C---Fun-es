#include <stdio.h>
#include<locale.h>

void i(int i);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int x;
	printf("Informe a idade do usuário: ");
	scanf("%i", &x);
	i(x);
	return(0);
}

void i(int i){
	if(i >= 18){
		printf("O usuário é maior de idade.");
	}
	else{
		printf("O usuário é menor de idade.");
	}
}