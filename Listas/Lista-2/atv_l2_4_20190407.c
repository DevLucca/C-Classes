#include <stdio.h>
#include <string.h>

int main(){
   int ret = 1;
   float val = 0, val_total = 0 ,val_desc = 0, val_desc_tota = 0;
   char prod[1];
printf("Bem vindo ao supermercado!\nAo terminar de inserir um produto, digite 1 para continuar inserindo e 0 para terminar a compra\n");
  for (int i = 0; i <= 100; i++){
   if(ret != 0){
     printf("Insira o cod. do produto e valor:\n");
     scanf("%s %f", prod, &val);
     if((strcmp(prod,"a")==0) || (strcmp(prod,"A")==0)){
       val_desc = (val * 0.2);
       val_desc_tota += val_desc;
       val = val - val_desc;
     }
     if((strcmp(prod,"b")==0) || (strcmp(prod,"B")==0)){
       val_desc = (val * 0.1);
       val_desc_tota += val_desc;
       val = val - val_desc;
     }
     val_total += val;
     scanf("%d", &ret);
   } else {
     if(val_total >= 80){
       val_total = val_total - (val_total*0.1);
       val_desc_tota += val_total*0.1;
     }
     printf("Valor total: %0.2f\n",val_total);
     printf("Desconto dado: %0.2f\n",val_desc_tota);
     break;
   }
  }
  return 0;
};
