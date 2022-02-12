#include<stdio.h>

void cubo(int *num){
	
	*num = (*num) * (*num) * (*num);
	printf("O cubo eh = %d", *num);
}


int main(){
	int num1;
	printf("Digite o numero que sera elevado ao cubo\n");
	scanf("%d", &num1);
	
	cubo(&num1);
	return 0;
	
}
