#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  printf("Favor inserir 2 números ímpares: (0 para sair)\n");
  int n1, n2, tot = 0;
  do{
    scanf("%d \n%d",&n1, &n2);
    if(n1 % 2 == 0 && n1 != 0){
      printf("PAR INSERIDO! %d\n",n1);
      printf("Favor inserir um número ímpar: \n");
      scanf("%d", &n1);
    }
    if(n2 % 2 == 0 && n2 != 0){
      printf("PAR INSERIDO! %d\n", n2);
      printf("Favor inserir um número ímpar: \n");
      scanf("%d", &n2);
    }
    if(n1 % 2 != 0 && n2 % 2 != 0){
      tot += n1 * n2;
    }
    if(n1 != 0 && n2 !=0){
    printf("Tudo ok! Favor inserir +2 números ímpares!\n");
    } else {
      printf("\n------------------------------\nSOMANDO...\n");
    }
  }
    while(n1 != 0 && n2 != 0);
    printf("------------------------------\n");
    printf("Soma dos ímpares consecutivos: %d",tot);
  return 0;
}
