#include <stdio.h>

int main() {
  printf("Favor inserir um numero: (Digite 99 para sair)\n");
  int n, par = 0, imp = 0, tot = 0;
  float perc_imp,perc_par;
  do{
    scanf("%d",&n);

    if (n % 2 == 0){
      par += 1;
      printf("Par inserido!\n");
    } else {
      if(n==99){
        tot -= 1;
      } else {
      imp += 1;
      printf("Impar inserido!\n");
      }
    }
    tot += 1;
  }
    while(n != 99);
    perc_par = (100 * par)/tot;
    perc_imp = (100 * imp)/tot;
    printf("Percentual Par : %.2f\n",perc_par);
    printf("Percentual Impar : %.2f\n",perc_imp);
  return 0;
}
