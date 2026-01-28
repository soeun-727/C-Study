#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int round = 10;
     while (N >= round) {
        N = (N + round/2) / round * round;
        round *= 10;
    }

    printf("%d\n", N);
    return 0;
}//1990