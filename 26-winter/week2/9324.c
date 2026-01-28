#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

int main() {
    int testCase;
    scanf("%d", &testCase);
    while(testCase--){
      char* arr;
      arr = (char*)malloc(sizeof(char)*MAX);
      scanf("%s", arr);
      int alphabet[26] = {0};
      int isFake = 0;

      for(int i =0; arr[i] != '\0'; i++){
        alphabet[(int)(arr[i]-'A')]++;
        if(alphabet[(int)(arr[i]-'A')] == 3){
          if(arr[i+1]!= arr[i]){
            isFake=1;
            break;
          }
          alphabet[(int)(arr[i]-'A')] = 0;
          i++;
        }
      }

      if (isFake)
            printf("FAKE\n");
        else
            printf("OK\n");

        free(arr); 
    }
    return 0;
}