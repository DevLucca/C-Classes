#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	
	float lq,area,perim;
	printf("Bem vindo a calculadora de area e perimetro!\nFavor inserir o tamanho do lado do seu quadrado: ");
	scanf("%f",&lq);
	printf("Calculando...\n");
	//----------------------------------------------------------------------//
	sleep(3);
	
	area = lq * lq * lq;
	perim = lq * 12;
	
	sleep(1);
	
	printf("Sua area é %0.2f!\n",area);
	printf("Seu perimetro é %0.2f!\n",perim);
	
	printf("Ate a proxima!");
	
return 0;
}
