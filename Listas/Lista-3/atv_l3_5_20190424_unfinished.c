#include <stdio.h>

int main() {
  int i, n, aux=0;
  printf("Favor inserir um valor: \n");
    do{
      scanf("%d",&n);
      for(i=0;i<10;i++){
        aux+=n+i;
    }
    printf("\n%d",aux);
    }
      while(n != 0);
  return 0;
}
