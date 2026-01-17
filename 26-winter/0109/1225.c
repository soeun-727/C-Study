#include <stdio.h>
#include <stdlib.h>
#define MAX 10001

int main(){
  char* A;
  char* B;
  A = (char*)malloc(sizeof(char)*MAX);
  B = (char*)malloc(sizeof(char)*MAX);
  scanf("%s %s", A, B);
  int temp;
  long long answer = 0;

  for (int i = 0; A[i] != '\0'; i++){
    for (int j = 0; B[j] != '\0'; j++){
      //int로 변환해서 각 자리수를 곱한 것을 temp에 저장
      temp = (A[i] - 48) * (B[j] - 48);
      //answer에 temp값 계속 더하기
      answer += (long long) temp;
    }
  }

  free(A); free(B);

  printf("%lld", answer);
  return 0;
}