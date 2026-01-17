#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    int A, B;
    scanf("%d %d", &A, &B);
    //B가 몇 개여야 A를 덮을 수 있는가...
    // 1줄에 삼각형이 1, 3, 5, 7, 9... 이렇게 증가
    // 2n-1씩 증가? 맞는 듯
    int temp = A/B;
    long long result = 0;
    for(int i = 1; i <= temp; i++){
      result += (long long)((2*i) -1);
    }
    printf("%lld\n", result);
  }
  return 0;
}

