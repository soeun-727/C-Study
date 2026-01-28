#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long candy;
        long long sum_mod = 0;

        for (int i = 0; i < N; i++) {
            scanf("%lld", &candy);
            sum_mod = (sum_mod + candy) % N;
        }

        // 총합이 N으로 나누어 떨어지면 가능
        if (sum_mod == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
