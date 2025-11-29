#include <stdio.h>

typedef struct {
    int priority;
    int index;
} Document;

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        const int CAP = 1000;
        Document queue[CAP];
        int priorityCount[10] = {0}; //중요도 세기

        for (int i = 0; i < N; i++) {
            int p;
            scanf("%d", &p);
            queue[i].priority = p;
            queue[i].index = i;
            priorityCount[p]++;
        }

        int front = 0; //읽을 위치
        int back = N; //다음에 쓸 위치
        int printed = 0;

        while (1) {
            Document current = queue[front % CAP];
            front++;

            //현재보다 높은 중요도가 있는지 확인
            int hasHigher = 0;
            for (int p = current.priority + 1; p <= 9; p++) {
                if (priorityCount[p] > 0) {
                    hasHigher = 1;
                    break;
                }
            }

            if (hasHigher) {
                //뒤로 보내기
                queue[back % CAP] = current;
                back++;
            } else {
                //인쇄
                printed++;
                priorityCount[current.priority]--;

                if (current.index == M) {
                    printf("%d\n", printed);
                    break;
                }
            }
        }
    }
    return 0;
}
