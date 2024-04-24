#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5
#define M 101

main(){
  int l, c, m[T][T], sair;
  srand(time(NULL));
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      do{
        sair = 0;
        m[l][c] = rand() % M;
        if(m[l][c] % 2 == 0){
          if(m[l][c] < 30 || m[l][c] > 50){
            sair++;
          }
        }
        else{
          if(m[l][c] < 70 || m[l][c] > 90){
            sair++;
          }
        }
      }while(sair != 0);
    }
  }
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      if(c == T - 1){
        printf("%i\n", m[l][c]);
      }
      else{
        printf("%i - ", m[l][c]);
      }
    }
  }
  getchar();
}