#include <stdio.h>

int bubble(int* x, int* y){
  int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
  int N, k;
  scanf("%d %d", &N, &k);
  int A[10001];

  for (int i =0; i < N; i ++){
    scanf("%d", &A[i]);
  }

  int count = 0;
  //버블정렬을 하는데 k번째에서 스탑하고 그 두 수를 반환하기
    for(int j = 0; j < N-1; j++){
      for (int i = 0; i <N-j-1; i++){
        if(A[i] > A[i+1]){
          bubble(&A[i], &A[i+1]);
          count++;
          if(count == k){
          printf("%d %d", A[i], A[i+1]);
        }
        }
      }
    }
    if(count< k) printf("-1");
  
}
