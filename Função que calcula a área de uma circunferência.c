#include<stdio.h>
#include<locale.h>
#include<math.h>
//Protótipo da função
float ac(float r);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, A;
	//Solicitando o raio da circunferência
	printf("Informe o raio da circunferência: ");
	scanf("%f", &raio);
	//Chamada da função
	A = ac(raio);
	printf("A área da circunferência é: %.1f", A);
	return(0);
}
//Definição da função
float ac(float r){
	return(3.14 * pow(r, 2));
}
