#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
	int idade1,idade2,idade3, idade4,somaIdade;
	float mediaIdade;
	printf("Favor informar 4 idades:");
	scanf("%d %d %d %d",&idade1,&idade2,&idade3,&idade4);
	somaIdade = idade1 + idade2 + idade3 + idade4;
	mediaIdade = somaIdade/4;
	printf("Média das idades: %f",mediaIdade);
	return 0;
}