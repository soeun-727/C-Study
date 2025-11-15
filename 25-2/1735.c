#include <stdio.h>

//최대공약수(GCD) 계산
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int A, B, C, D;
    scanf("%d %d", &A, &B);  //첫 번째 분수 A/B
    scanf("%d %d", &C, &D);  //두 번째 분수 C/D

    //두 분수의 합 = (A*D + C*B) / (B*D)
    long long numerator = (long long)A * D + (long long)C * B;  //분자
    long long denominator = (long long)B * D;                   //분모

    //기약분수를 위해 gcd로 나눔
    int g = gcd(numerator, denominator);

    numerator /= g;
    denominator /= g;

    printf("%lld %lld\n", numerator, denominator);

    return 0;
}
