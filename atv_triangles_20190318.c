#include <stdio.h>
#include <math.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){
   
   double a, b, c;
   printf("BEM VINDO AO INDICADOR TRIANGULAR\n-------------------------------------------------\nFAVOR INSERIR A, B e C PARA CONTINUAR:\n");
   printf("A: B: C:");
   scanf("%IA %IA %IA",&a,&b,&c);
   if(a <= 0 || b <= 0 || c <= 0){
       printf("VALORES NEGATIVOS, INPUT INVALIDO!");
   } else {
   if(a >= b + c){
       printf("NAO É UM TRIANGULO\nRECOMECAR...");
   } else
   if(pow(a,2) == pow(b,2) + pow(c,2)){
       printf("TRIANGULO RETANGULO\n");
   } 
   if(pow(a,2) > pow(b,2) + pow(c,2)){
       printf("TRIANGULO OBTUSANGULO\n");
   } 
   if(pow(a,2) < pow(b,2) + pow(c,2)){
       printf("TRIANGULO ACUTANGULO\n");
   } 
   if(a == b && b == c){
       printf("TRIANGULO EQUILATERO\n");
   }
   if((a == b && c != a && c != b)||(a == c && b != a && b != c)||(c == b && a != b && a != c)){
       printf("TRIANGULO ISOCELES\n");
   }
   }
return 0;
}
