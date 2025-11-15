#include <stdio.h>
#include <string.h>

//최대 비숍의 수는 2N-2 임
//입력이 70자리 정수이기 때문에 구현 어려움

//문자열 N 받아 2*N하기
void timesTwo(char *n, char *result) {
    int len = strlen(n);
    int carry = 0, idx = 0;
    char temp[100] = {0};

    //가장 뒷자리부터 2 곱하기
    for (int i = len - 1; i >= 0; i--) {
        int num = (n[i] - '0') * 2 + carry;
        temp[idx++] = (num % 10) + '0';
        carry = num / 10;
    }
    if (carry) temp[idx++] = carry + '0';

    //뒤집어 저장
    for (int i = 0; i < idx; i++)
        result[i] = temp[idx - 1 - i];
    result[idx] = '\0';
}


//-2 하는 함수
void minusTwo(char *n) {
    int len = strlen(n);
    int i = len - 1;

    int borrow = 2;

    //뒷자리부터 2 빼기
    //빌려오는 경우 고려
    while (borrow > 0) {
        int digit = n[i] - '0';
        if (digit >= borrow) {
            n[i] = (digit - borrow) + '0';
            borrow = 0;
        } else {
            n[i] = (digit + 10 - borrow) + '0';
            borrow = 1;
        }
        i--;
    }

    //맨 앞자리 0일 시 제거
    if (n[0] == '0') {
        memmove(n, n + 1, strlen(n));
    }
}

int main() {
    char N[80];
    scanf("%s", N);

    //N=1인 경우
    if (strcmp(N, "1") == 0) {
        printf("1\n");
        return 0;
    }

    char doubled[100] = {0};
    timesTwo(N, doubled); //2*N
    minusTwo(doubled); //2*N-2

    printf("%s\n", doubled);
    return 0;
}
