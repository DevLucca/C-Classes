#include<stdio.h>
#include<math.h>
#include<string.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
	
	int tam = 4, a = 0, b = 0, div = 0, soma = 0,maiorpar = 0, menor = 0, maior = 0;
	float med = 0;
	int num[tam],par[tam],imp[tam],teste;
	printf("Bem vindo ao separador numerico! \nFavor inserir 4 numeros: ");
	scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
	
	for (int i = 0; i < tam; i++){
	    par[i] = 0;
	    imp[i] = 0;
	}
	
	for (int i = 0; i < tam; i++){
	    teste = num[i] % 2;
		if(teste == 0){
			par[a] = num[i];
			a++;
		} else {
			imp[b] = num[i];
			b++;
		}
	}
	
	
	for (int i = 0; i < tam; i++){
	    if(par[i]==0){
	        continue;
	    } else {
	printf("\nArray de pares:( %d ) ",par[i]);
	    }
	}
	for (int i = 0; i < tam; i++){
	    if(imp[i]==0){
	        continue;
	    } else {
	printf("\nArray de impares:( %d ) ",imp[i]);      
	    }
	}
	
	for(int i = 0; i < tam; i++){
	    if(imp[i]!=0){
	        div += 1;
	    }    
	}
	
	soma = imp[0] + imp[1] + imp[2] + imp[3];
	med = soma/div;
	printf("\nMedia dos impares: %0.2f",med);

	maiorpar = par[0];
	for(int i = 0; i < tam; i++){
	    if(par[i]>maiorpar){
	        maiorpar = par[i];
	    } 
	}
	printf("\nMaior par: %d",maiorpar);
	
	maior = num[0];
	for(int i = 0; i < tam; i++){
	    if(num[i]>maior){
	        maior = num[i];
	    } 
	}
    printf("\nMaior numero: %d",maior);

	menor = num[0];
	for(int i = 0; i < tam; i++){
	    if(num[i]<menor){
	        menor = num[i];
	    } 
	}
    printf("\nMenor numero: %d",menor);
    
    printf("\nDiferenca Maior x Menor: %d", maior-menor);
return 0;
}
