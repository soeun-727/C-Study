#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int count = 0;
 
    do {
        int tens = N / 10;       // 십의 자리
        int ones = N % 10;       // 일의 자리
        int sum = tens + ones;   // 자리수 합

        N = ones * 10 + (sum % 10);  // 새로운 수
        count++;

    } while (N != original);

    printf("%d\n", count);
    return 0;
}
