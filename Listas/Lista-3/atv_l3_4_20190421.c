#include <stdio.h>

int main() {
  int i, n, tot=0;
  printf("Favor inserir um valor: \n");
  scanf("%d",&n);
  if(n % 2 == 0){
    for(i=0;i<10;i++){
      tot+=n+(2*i);
    }
  } else {
    for(n+=1,i=0;i<10;i++){
      tot+=n+(2*i);
    }
  }
printf("Soma do primeiro valor + (10 valores pares subsequentes):\n%d",tot);
  return 0;
}
