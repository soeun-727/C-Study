#include <stdio.h>

//3진수로 해석해 풀기
int main() {
    long long N;
    scanf("%lld", &N);

    long long result = 0;
    long long power = 1; //3^0

    while (N > 0) {
        if (N & 1) { //이진수에서 1인 자리 → 3의 거듭제곱 더하기
            result += power;
        }
        power *= 3; //다음 3의 제곱
        N >>= 1; //이진수 다음 자리로
    }

    printf("%lld\n", result);
    return 0;
}
