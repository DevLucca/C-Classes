#include<stdio.h>
#include<math.h>

int main( int argv, char *argc[]){
	int a,b;
	int aux;
	printf("Insira os valores para A e B: ");
	scanf("%d" "%d" , &a , &b);
	aux = a;
	a = b;
	b = aux;
	printf("Valor Final: NEW A: %d NEW B: %d",a ,b);
	//printf("Valor Final: NEW A: %d NEW B: %d",a);
}