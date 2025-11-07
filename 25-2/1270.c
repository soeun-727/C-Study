#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if (x > y) return 1;
    else if (x < y) return -1;
    else return 0;
}

//군대의 병사가 절반을 초과한다면 그 땅은 그 번호의 군대의 지배하에
int main() {
    int n; //땅 개수
    scanf("%d", &n);

    while (n--) {
        int T; //각 땅마다 병사 번호
        scanf("%d", &T);

        long long soldiers[100000];
        for (int i = 0; i < T; i++) {
            scanf("%lld", &soldiers[i]);
        }

        //정렬 후 가장 긴 연속된 구간 찾기
        qsort(soldiers, T, sizeof(long long), compare);

        int max_count = 1;
        int count = 1;
        long long majority = soldiers[0];

        for (int i = 1; i < T; i++) {
            if (soldiers[i] == soldiers[i - 1]) {
                count++;
            } else {
                if (count > max_count) {
                    max_count = count;
                    majority = soldiers[i - 1];
                }
                count = 1;
            }
        }

        //마지막 구간 처리
        if (count > max_count) {
            max_count = count;
            majority = soldiers[T - 1];
        }

        if (max_count > T / 2)
            printf("%lld\n", majority);
        else
            printf("SYJKGW\n");
    }

    return 0;
}
