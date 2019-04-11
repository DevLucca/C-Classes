#include <stdio.h>
#include <string.h>

int main() {
  char c;
  printf("Insira seu caracter:\n");
  scanf("%c",&c);
  if((c >= 65 && c<=90)||(c>=97 && c<=122)){
  printf("Letra");
  } else if (c >= 48 && c<=57){
    printf("Numero");
  } else if ((c = 42)||(c = 43)||(c = 45)||(c = 47)){
    printf("Operador Aritimetico");
  } else {
    printf("Caracter Desconhecido");
  }
  return 0;
}
