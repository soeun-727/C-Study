#include <stdio.h>
#define MAX 1000000007

int main() {
    long long N, x;
    scanf("%lld %lld", &N, &x);

    long long result = 0;
    for(long long i = 0; i <= N; i++){
        long long coef, deg;
        scanf("%lld %lld", &coef, &deg); 
        result = (result * x + coef) % MAX;
    }

    printf("%lld\n", result);
    return 0;
}
