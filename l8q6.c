#include<stdio.h>
#include<locale.h>
#include<math.h>
float ac(float r);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, A;
	printf("Informe o raio da circunfer�ncia: ");
	scanf("%f", &raio);
	A = ac(raio);
	printf("A �rea da circunfer�ncia �: %.1f", A);
	return(0);
}

float ac(float r){
	return(3.14 * pow(r, 2));
}
