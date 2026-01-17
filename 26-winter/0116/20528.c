//팰린드롬 문자열 N개에 대해 끝말잇기가 가능한?

#include <stdio.h>

int main(){
  int N;
  scanf("%d\n", &N);
  char arr[10001];
  fgets(arr, 10001, stdin);

  // printf("%s\n", arr); 

  char alphabet;
  for(int i = 0; arr[i] != '\0'; i++){

      if (arr[i] == ' '){
        if(arr[i-1] != arr[i+1]){
          printf("0");
          return 0;
        } else{
          N--;
        }
      }
      if(N==0) break;
  }
  printf("1");
}