#include <stdio.h>

int main() {
  double i, n, aux,med; 
  printf("Favor inserir um valor: \n");
    do{
      aux=0;
      scanf("%lf",&n);
      for(i=0;i<=10;i++){
        aux+=n+i;
        if(i!=10){
          printf("[%.0lf+%.0lf]+",n,i);
        } else {
          printf("[%.0lf+%.0lf] = [%.0lf]\n",n,i,aux);
        }   
    }
    med = aux / 10;
    printf("Média : [%.0lf / 10] = [%.2lf]\n",aux,med);
    }
      while(n != 0);
  return 0;
}
