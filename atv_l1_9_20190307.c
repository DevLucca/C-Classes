#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	
	float cat1,cat2,hip,area;
	printf("Bem vindo a calculadora de area de triangulo retangulo!\nFavor inserir cateto 1: ");
	scanf("%f",&cat1);
	printf("Favor inserir cateto 2: ");
	scanf("%f",&cat2);
	hip = sqrt(pow(cat1,2) + pow(cat2,2));
	printf("Hipotenusa = %0.2f",hip);
	printf("\nCalculando...\n");
	//----------------------------------------------------------------------//
	sleep(3);
	
	area = (cat1 * cat2)/2;
	
	sleep(1);
	
	printf("Sua area é %0.2f!\n",area);
	printf("Ate a proxima!");
	
return 0;
}