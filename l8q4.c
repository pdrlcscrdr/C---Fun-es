#include <stdio.h>
#include<locale.h>

void i(int i);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int x;
	printf("Informe a idade do usu�rio: ");
	scanf("%i", &x);
	i(x);
	return(0);
}

void i(int i){
	if(i >= 18){
		printf("O usu�rio � maior de idade.");
	}
	else{
		printf("O usu�rio � menor de idade.");
	}
}