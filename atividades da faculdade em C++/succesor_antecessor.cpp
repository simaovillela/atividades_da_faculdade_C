#include<stdio.h>
int main(){
int n, s, a;
	printf("Insira um numero:");
	scanf("%i", &n);
	a = n - 1;
	s = n + 1;
	printf("\no antessessor de %.2i = %.2i", n, a);
	printf("\no sucessor de %.2i = %.2i", n, s);
}
