#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    int ball = 1;   // 공은 처음에 1번 컵 아래

    while (M--) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (ball == x)
            ball = y;
        else if (ball == y)
            ball = x;
    }

    printf("%d\n", ball);
    return 0;
}
