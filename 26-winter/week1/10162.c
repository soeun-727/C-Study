#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  int A=0, B=0, C=0;
  //5분 1분 10초

  if(T%10 !=0){
      printf("%d", -1);
    }

  else{
  while (T!=0){
    if(T>=300){
      A += T/300;
      T=T%300;
    } if(T >=60){
      B += T/60;
      T=T%60;
    } if (T>=10){
      C+=T/10;
      T=T%10;
    }
  }
  printf("%d %d %d", A, B, C);
}
}