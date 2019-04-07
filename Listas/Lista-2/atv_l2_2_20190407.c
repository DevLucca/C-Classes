#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, val_pos, val_neg, delta, divisor;
  printf("Insira os valores para A, B e C, respectivamente:\n");
  scanf("%f\n %f\n %f",&a,&b,&c);
  printf("Executando função......\n");
  delta = sqrt(pow(b,2)-(4*a*c));
  divisor = 2*a;
  val_pos = (-b + delta)/divisor;
  val_neg = (-b - delta)/divisor;
  if (isnan(delta)) {
    printf("Delta Inválido, Valores negativos!");
  } else {
    printf("Raiz quadrada de Delta = %f\n", delta);
  printf("Primeira execução (+)\n");
  printf("(-b + delta)/2.a = %f\n",val_pos);
  printf("Segunda execução (-)\n");
  printf("(-b - delta)/2.a = %f\n",val_pos);
  }
  return 0;
}
