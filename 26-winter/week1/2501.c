#include <stdio.h>
#define MAX 10001

int main(){
  int N, K;
  scanf("%d %d", &N, &K);
  int arr[MAX];
  int num=0;
  //N의 약수 구하기
  
  for(int i=1; i<=N; i++){
    if (N%i == 0){
      arr[num]=i;
      num++;
    }
  }
  if (K > num) {
        printf("0");
    } else {
        printf("%d", arr[K - 1]);
    }
  
}