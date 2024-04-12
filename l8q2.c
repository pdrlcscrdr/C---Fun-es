#include <stdio.h>
#include<locale.h>

void pnn(int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um valor inteiro: ");
	scanf("%i", &x);
	pnn(x);
	return(0);
}

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
