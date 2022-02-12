#include<stdio.h>

int cubo(int num){
	int a;
	a = num * (num * num);
	return a;
}


int main(){
	int num1, Cubo, resultado;
	printf("Digite o numero que sera elevado ao cubo\n");
	scanf("%d", &num1);
	
	Cubo = cubo(num1);
	
	printf("O cubo eh = %d", Cubo);
	
	return 0;
	
}
