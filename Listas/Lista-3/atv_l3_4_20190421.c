#include <stdio.h>

int main() {
  int i, n, par_qt = 0, par = 0;
  printf("Favor inserir um valor: \n");
  scanf("%d",&par);
  printf("Favor inserir n valores: (sáida ao inserir 10 pares)\n");
  do {
    scanf("%d", &n);
    if(n % 2 == 0){
      par_qt += 1;
      par += n;
    } else {
      printf("Ímpar inserido! Re-inserir outro número. \n");
    }
  }
    while (par_qt != 10);

printf("Soma do primeiro valor + (10 valores pares inseridos):\n%d",par);
  return 0;
}
