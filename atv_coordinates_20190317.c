#include <stdio.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
   
   float x, y;
   printf("BEM VINDO AO INDICADOR CARTESIANO\n-------------------------------------------------\nFAVOR INSERIR AS COORDENADAS (x,y) PARA CONTINUAR:\n");
   printf("x: ");
   scanf("%f",&x);
   printf("y: ");
   scanf("%f",&y);
   if(x > 0 && y > 0){
       printf("Q1 (%0.2f, %0.2f)",x,y);
   } else
   if(x < 0 && y > 0){
       printf("Q2 (%0.2f, %0.2f)",x,y);
   } else
   if(x < 0 && y < 0){
       printf("Q2 (%0.2f, %0.2f)",x,y);
   } else
   if(x > 0 && y < 0){
       printf("Q4 (%0.2f, %0.2f)",x,y);
   }
   if(x == 0 && y == 0){
       printf("ORIGEM");
   } else
   if(x == 0 && y != 0){
       printf("ABSCISSA NO PONTO (0,%0.2f)",y);
   } else
   if(x != 0 && y == 0){
       printf("ORDENADA NO PONTO (%0.2f,0)",x);
   }
return 0;
}
