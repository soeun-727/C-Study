#include <stdio.h>
#define MAX 1001

int main(){
  int N;
  scanf("%d", &N);
  int arr[MAX];
  for(int i; i < N; i++){
    scanf("%d", &arr[i]);
  }

  int temp;
  for(int i=0; i < N-1; i++){
    for (int j = 0; j < N-i-1; j++) {
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(int i=0; i < N; i++){
    printf("%d\n", arr[i]);
  }

}