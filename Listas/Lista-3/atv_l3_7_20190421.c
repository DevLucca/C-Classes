#include <stdio.h>

int main(){
  int i, n_ = 0, n__ = 0;
  float n;
  for(i=0;i<10;i++){
    scanf("%f", &n);
    if(10 <= n && n <= 20){
      n_ += 1;
    } else {
      n__ += 1;
    }
  }
  printf("Qtde de números entre 10 e 20: %d\nQtde de números fora do intervalo: %d",n_,n__);

  return 0;
}
