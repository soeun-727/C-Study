#include <stdio.h>
#include <stdlib.h>

int sub(int x, int y){
  return abs(x-y);
}

int main() {
  while(1){
    int N;
    scanf("%d", &N);
    if(N == 0) break;
    else{
      int arr[1000];
      for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
      }
      int min = 1000000;
      for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++ ){
          int subtract = sub(arr[i],arr[j]);
          if(min > subtract){
            min = subtract;
          }
        }
      }
      printf("%d\n", min);
    }
  }
  return 0;
}