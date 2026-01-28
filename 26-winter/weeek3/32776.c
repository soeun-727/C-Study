#include <stdio.h>

int main() {
    int S_ab;
    int M_a, F_ab, M_b;
    scanf("%d", &S_ab);
    scanf("%d %d %d", &M_a, &F_ab, &M_b);

    int flight_time = M_a + F_ab + M_b;

    if (flight_time >= S_ab || S_ab <= 240) {
        printf("high speed rail");
    } else {
        printf("flight");
    }

    return 0;
}
