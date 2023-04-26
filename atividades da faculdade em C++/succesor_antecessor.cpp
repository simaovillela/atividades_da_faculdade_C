#include<stdio.h>
int main(){
int n, s, a;
	printf("Insira um numero:");
	scanf("%d", &n);
	a = n - 1;
	s = n + 1;
	printf("\no antessessor de %d = %d", n, a);
	printf("\no sucessor de %d = %d", n, s);
}
