#include<stdio.h>
#include<locale.h>
//Protótipos das funções
float media(float n1, float n2, float n3);
void conceito(float m);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, m;
	//Solicitação das notas
	printf("Digite as três notas para o cálculo da média: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	//Chamada da função media
	m = media(n1, n2, n3);
	printf("A média é: %.1f. \n", m);
	//Chamada da função conceito
	conceito(m);
	return(0);
}
//Definição da função media
float media(float n1, float n2, float n3){
	return((n1 + n2 + n3) / 3);
}
//Definição da função conceito
void conceito(float m){
	if(m >= 9){
		printf("Conceito: A.");
	}else if(m >= 7 && m < 9){
		printf("Conceito: B.");
	}
	else if(m >= 6 && m < 7){
		printf("Conceito: C.");
	}
	else if(m >= 4 && m < 6){
		printf("Conceito: D.");
	}
	else{
		printf("Conceito: E.");
	}
}
