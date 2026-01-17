#include <stdio.h>
#include <string.h>

int main() {
    char hexadecimal[7];
    scanf("%s", hexadecimal);

    int decimal = 0;

    for (int i = 0; i < strlen(hexadecimal); i++) {
        decimal *= 16;
        if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
            decimal += hexadecimal[i] - 'A' + 10;
        else
            decimal += hexadecimal[i] - '0';
    }

    printf("%d\n", decimal);
    return 0;
}
