#include<stdio.h>
#include<locale.h>

int f(int x);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	do{
		printf("Digite um n�mero inteiro maior que zero: \n");
		scanf("%i", &x);
	}while (x <= 0);
	printf("O fatorial de %i �: %i", x, f(x));
	return(0);
}
int f(int x){
	int i, fat = 1;
	for(i = 1; i <= x; i++){
		fat *= i;
	}
	return(fat);
}