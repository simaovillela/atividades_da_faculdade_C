#include<stdio.h>
int main(){
float n, s, a;
	printf("Insira um numero:");
	scanf("%f", &n);
	a = n - 1;
	s = n + 1;
	printf("\no antessessor de %.2f = %.2f", n, a);
	printf("\no sucessor de %.2f = %.2f", n, s);
}
