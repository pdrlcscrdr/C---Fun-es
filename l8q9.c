#include<stdio.h>
#include<locale.h>

float media(float n1, float n2, float n3);
void conceito(float m);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, m;
	printf("Digite as tr�s notas para o c�lculo da m�dia: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	m = media(n1, n2, n3);
	printf("A m�dia �: %.1f. \n", m);
	conceito(m);
	return(0);
}

float media(float n1, float n2, float n3){
	return((n1 + n2 + n3) / 3);
}

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