#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  char nm[20];
  int h, n = 1;
  int maior = 0, maior2 = 0;

  do{
    printf("Insira o nome da modelo: \n");
    scanf("%s", nm);
    if((strcmp(nm,"FIM")==0)||(strcmp(nm,"fim")==0)||(strcmp(nm,"Fim")==0)){
      n = 0;
      break;
    } else {
      printf("Insira a altura da modelo (em cm): \n");
   scanf("%d", &n); 
   while(n<=0){
     printf("Altura inválida, favor tentar novamente...\n");
     printf("Insira a altura da modelo (em cm): \n");
     scanf("%d",&n);
   }
   if(n>maior){
     maior = n;
   }
    }
  }
  while (n);
  printf("fim %d",maior);
  return 0;
}
