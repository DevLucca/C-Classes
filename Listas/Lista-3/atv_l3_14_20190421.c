#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
  setlocale(LC_ALL,"");
  int method;
  float val;
  printf("Insira o valor a ser calculado:\n");
  scanf("%f", &val);
  printf("\n---------------------------------------\n");
  printf("Selecione o método de pagamento:\n[1] À vista\n[2] À prazo\n");
  scanf("%d", &method);
  if(method == 1){
    printf("Método escolhido: À Vista...");
    val = val - (val * 0.05);
    printf("\n---------------------------------------\n");
    printf("Valor com 5%c de desconto: R$%.2f", 37,val);
  } else if (method == 2){
    printf("Método escolhido: À Prazo...");
    val = val + (val * 0.3);
    printf("\n---------------------------------------\n");
    printf("Valor com 30%c de acrésimo: R$%.2f", 37,val);
  }
  return 0;
}
