#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  char blank =' ';
  char star = '*';

  for (int i = 0; i < N; i++){
    for(int j = 0; j <i; j++){
      printf("%c", blank);
    }
    for(int k = 0; k < N-i; k++){
      printf("%c", star);
    }
    printf("\n");
  }
}