#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
const double pi = 4.0 * atan(1.0);

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	
	float r,area,perim;
	printf("Bem vindo a calculadora de area e perimetro!\nFavor inserir o raio do seu circulo: ");
	scanf("%f",&r);
	printf("Calculando...\n");
	//----------------------------------------------------------------------//
	sleep(3);
	
	area = pi * (pow(r,2));
	perim = 2 * pi * r;
	
	sleep(1);
	
	printf("Sua area é %0.2f!\n",area);
	printf("Seu perimetro é %0.2f!\n",perim);
	
	printf("Ate a proxima!");
	
return 0;
}
