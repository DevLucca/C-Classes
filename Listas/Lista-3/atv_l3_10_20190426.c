#include <stdio.h>

int main() {
  double n,neg = 0,pos = 0;
  int qt_neg = 0, qt_pos = 0,qt_tot = 0;
  do{
    scanf("%lf",&n);
    if(n < 0){
      neg+=n;
      qt_neg++;
    } else if(n > 0){
      pos+=n;
      qt_pos++;
    }
    qt_tot++;
  }
  while (n);
  printf("Quantidade de positivos = [%d de %d]\n",qt_pos,qt_tot);
  printf("Quantidade de negativos = [%d de %d]\n",qt_pos,qt_tot);
  printf("Soma de positivos = [%lf]\n",pos);
  printf("Soma de negativos = [%lf]\n",neg);
  return 0;
}
