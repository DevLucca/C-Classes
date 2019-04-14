#include <stdio.h>
#include <string.h>

int main(){
  int c = 0,mes;
  int dias = 31;
  char ano[4], f_ano[4];
  printf("Favor inserir ano (yyyy) e mes (mm [1-12]):\n");
  scanf("%s%d",ano,&mes);
  //gets(ano);
  while (c < 2) {
      f_ano[c] = ano[3+c-1];
      c++;
   }
   f_ano[c] = '\0';

if(mes>12 || mes<1)
            printf("Mes invalido");
        else {
      switch( mes )
        {
          case 2:
            if (((strcmp(f_ano,"00")==0)&& ((atoi(ano) % 400)==0))||((atoi(ano) % 4)==0)){
                    dias -=1;
            } else {
                    dias -=2;
            }
          case 4: case 6: case 9: case 11:
                    dias--;
        }
   printf("O mes %d possui %d dias", mes, dias);
}

return 0 ;
}
