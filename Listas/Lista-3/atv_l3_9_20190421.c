#include <stdio.h>

int main() {
  int i, n;
  for (i = 0,n = 1; i < 19; i++){
    if(i==0){
      printf("%dº termo: %d\n", i+1, n);
    }
    n = n * 3;
    printf("%dº termo: %d\n", i+2, n);
  }

  return 0;
}
