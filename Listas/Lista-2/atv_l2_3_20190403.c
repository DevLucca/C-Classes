#include <stdio.h>
#include <string.h>


int main(){
  int val_a, val_b, val_c, qtd_a = 0, qtd_b = 0, qtd_c = 0, qtd_total, valor_total;
  char foo[1];
  
  for(int i = 0; i < 100; i++){
         printf("Inserir Livro Comprado: ");
         scanf("%s",foo);
    
             if (strcmp(foo,"A")==0){
                 qtd_a++;
                 qtd_total++;
                 printf("Livro A inserido no carrinho! \n---------------------\n");
                 
             } else if (strcmp(foo,"B")==0){
                 qtd_b++;
                 qtd_total++;
                 printf("Livro B inserido no carrinho! \n---------------------\n");
                 
             } else if (strcmp(foo,"C")==0){
                 qtd_c++;
                 qtd_total++;
                 printf("Livro C inserido no carrinho! \n---------------------\n");
                 
             } else if (strcmp(foo,"x")==0){
               qtd_total = qtd_a + qtd_b + qtd_c;
               if(qtd_total < 10){
                 
               } else {
                 printf("\nMais de 10 livros selecionados!\n");
               }
                 printf("\nFinalizando compra!\n");
                 printf("Qtd de livro A: %d\n",qtd_a);
                 printf("Qtd de livro B: %d\n",qtd_b);
                 printf("Qtd de livro C: %d\n",qtd_c);
                 printf("--------------------------\n");
                 val_a = qtd_a*10;
                 val_b = qtd_b*20;
                 val_c = qtd_c*30;
                 valor_total = val_a + val_b + val_c;
                 printf("Valores individuais e Total:\n");
                 printf("A: %d livro(s) X R$10,00 = R$%d\n",qtd_a,val_a);
                 printf("B: %d livro(s) X R$20,00 = R$%d\n",qtd_b,val_b);
                 printf("C: %d livro(s) X R$30,00 = R$%d\n",qtd_c,val_c);
                 printf("---------------TOTAL DE = R$%d\n",valor_total);
                 break;
             } else {
                 printf("Livro invalido, favor inserir novamente...\n");
  
  }
 }
  return 0;
};
