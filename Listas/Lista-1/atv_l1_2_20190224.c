#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
	char nome1[30],nome2[30],nome3[30];
	int idade1,idade2,idade3, somaIdade;
	float mediaIdade;
	printf("Favor informar 3 nomes e respectivas idades: (nome [enter], idade)\n");
	scanf("%s%d%s%d%s%d",nome1,&idade1,nome2,&idade2,nome3,&idade3);
	somaIdade = idade1 + idade2 + idade3;
	mediaIdade = somaIdade/3;
	printf("Nomes: \n[1] %s \n[2] %s \n[3] %s \n",nome1,nome2,nome3);
	printf("Media das idades: %0.2f",mediaIdade);
	return 0;
}
