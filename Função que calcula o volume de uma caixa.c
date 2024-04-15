#include<stdio.h>
#include<locale.h>
//Protótipo da função
float vol(float c, float l, float a);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a, v;
	//Solicita as dimensões da caixa
	printf("Informe o comprimento, a largura, e a altura da caixa: \n");
	scanf("%f %f %f", &c, &l, &a);
	//Chamada da função
	v = vol(c, l, a);
	printf("O volume da caixa é: %.1f.", v);
	return(0);
}
//Definição da função
float vol(float c, float l, float a){
	return(c * l * a);
}
