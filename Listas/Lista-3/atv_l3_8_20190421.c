#include<stdio.h>
#include<locale.h>
int main(){
  setlocale(LC_ALL,"");
  printf("Favor inserir Nro. Mat, salário e valor total de vendas:\n");
  int mat;
  float sal, venda, com, sal_total;
  scanf("%d", &mat);
  while (mat!=99){
    scanf("%f %f", &sal, &venda);
    if(venda >= 1000){
      com = venda * 0.05;
    } if(venda < 1000){
      com = venda * 0.03;
    }
    sal_total = sal + com;
    printf("Nro. Matricula: %d\nSalario: R$%.2f\nVendas: R$%.2f\nSalário Total: R$%.2f\n", mat, sal, venda, sal_total);
    scanf("%d", &mat);
  }
  return 0;
}
