#include<stdio.h>
#include<math.h>
#include<string.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	
	int tam = 5;
	int num[tam],par[tam],imp[tam];
	printf("Bem vindo ao separador numerico! \nFavor inserir 4 numeros: ");
	scanf("%d %d %d %d",&num[1],&num[2],&num[3],&num[4]);
	
	for (int i = 1; i < tam; i++){
		if((num[i] % 2 )== 0){
			par[i] = num[i];
		} else {
			imp[i] = num[i];
		}
	}
	
	for (int i = 1; i < tam; i++){
	printf("\nArray de pares:( %d ) ",par[i]);
	printf("\nArray de impares:( %d ) ",imp[i]);
	}
return 0;
}
