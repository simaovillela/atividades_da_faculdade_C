#include<stdio.h>
int main(){
float a, b, p;
	printf("Insira um numero: ");
	scanf("%f", &a);
	printf("Insira outro numero: ");
	scanf("%f", &b);
	p = a * b;
	printf("\no produto dos numeros %.2f e %.2f = %.2f", a, b, p);
	
}
