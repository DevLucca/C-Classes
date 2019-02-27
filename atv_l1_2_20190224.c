#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
	char nome1,nome2,nome3;
	int idade1,idade2,idade3, somaIdade;
	float mediaIdade;
	printf("Favor informar 3 nomes e respectivas idades:");
	scanf("%s %d %s %d %s %d",&nome1,&idade1,&nome2,&idade2,&nome3,&idade3);
	somaIdade = idade1 + idade2 + idade3;
	mediaIdade = somaIdade/3;
	printf("Nomes: \n");
	printf("%s \n %s +\n %s \n",nome1,nome2,nome3);
	printf("Média das idades: %f",mediaIdade) ;
	return 0;
}
