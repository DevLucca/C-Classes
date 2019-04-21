#include <stdio.h>

int main() {
  int comm;
  do{
    scanf("%d", &comm);
    switch (comm){
    case 0:
      printf("Desligue tudo!\n");
      break;
    case 1:
      printf("Ligar TV!\n");
      break;
    case 2:
      printf("Ligar rádio!\n");
      break;
    case 3:
      printf("Ligar luz!\n");
      break;
    default:
      printf("Tente Novamente!\n");
    }
  }
    while(comm);
  return 0;
}
