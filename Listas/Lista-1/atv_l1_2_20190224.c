#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
	char nome1[30],nome2[30],nome3[30];
	int idade1,idade2,idade3, somaIdade;
	float mediaIdade;
	printf("Favor informar 3 nomes: \n");
	scanf("%s %s %s",&nome1,&nome2,&nome3);
	printf("e respectivas idades: \n");
	scanf("%d %d %d",&idade1,&idade2,&idade3);
	somaIdade = idade1 + idade2 + idade3;
	mediaIdade = somaIdade/3;
	printf("Nomes: \n");
	printf("%s  %s  %s \n",nome1,nome2,nome3);
	printf("Media das idades: %f",mediaIdade);
	return 0;
}
