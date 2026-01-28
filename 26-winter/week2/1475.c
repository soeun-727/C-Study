#include <stdio.h>

int main() {
    char N[8];
    scanf("%s", N);

    int numberCount[10] = {0};

    for (int i = 0; N[i] != '\0'; i++) {
        numberCount[N[i] - '0']++; 
    }

    numberCount[6] = (numberCount[6] + numberCount[9] + 1) / 2;
    numberCount[9] = 0;

    int max = 0;
    for (int i = 0; i < 10; i++) {
        if (numberCount[i] > max) {
            max = numberCount[i];
        }
    }

    printf("%d\n", max);
    return 0;
}
