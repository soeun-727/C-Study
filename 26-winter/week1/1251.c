#include <stdio.h>
#include <string.h>

void flip(char arr[], int start, int end) {
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char word[51], min[51], temp[51];
    if (scanf("%s", word) != 1) return 0;

    int length = strlen(word);
    
    for(int i = 0; i < 50; i++) min[i] = 'z' + 1;
    min[50] = '\0';

    for (int i = 0; i < length - 2; i++) {
        for (int j = i + 1; j < length - 1; j++) {
            strcpy(temp, word);

            flip(temp, 0, i);            
            flip(temp, i + 1, j);        
            flip(temp, j + 1, length - 1); 

            if (strcmp(temp, min) < 0) {
                strcpy(min, temp);
            }
        }
    }

    printf("%s\n", min);
    return 0;
}