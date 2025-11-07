#include <stdio.h>

long long rate(long long x, long long y){ //승률(%) 구하는 함수
  return y * 100 / x; //일반 정수형 나눗셈의 경우 계속 0이 됨
}

int main(){
  long long X, Y;
  scanf("%lld %lld", &X, &Y);

  long long Z = rate(X, Y); //현재 승률 %

  if(Z >= 99){ //승률이 99 이상이면 더 올라가지 않음
    printf("-1");
    return 0;
  }

  //이진 탐색 통해 승률 바뀌는 경우 찾기
  long long left = 1;
  long long right = 1000000000;
  long long result = -1;

  while (left <= right) {
    long long mid = (left + right) / 2;
    long long newZ = rate(X + mid, Y + mid);

    if (newZ > Z) { //더 커지는 경우
      result = mid;
        right = mid - 1;   //더 작은 mid 탐색
    } else {
      left = mid + 1;    //더 큰 mid
    }
  }

  printf("%lld", result); //i(게임 횟수) 출력
  return 0;
}