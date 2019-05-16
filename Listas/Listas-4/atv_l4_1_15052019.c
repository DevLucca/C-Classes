#include <stdio.h>
#include <math.h>

int main() {
  int op;
  double ray, res, pi = 3.1415;
  scanf("%d %lf",&op, &ray);

  switch (op){
  case 1:
   res = pi*pow(ray,2);
   break;
  case 2:
   res = 2*pi*ray;
   break;
  default:
  printf("OPERADOR INVALIDO\n");
  break;
  }
if(op == 1 || op == 2){
  printf("Operador: %d Resultado: %lf", op, res);
}
}
