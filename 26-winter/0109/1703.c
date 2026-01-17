#include <stdio.h>

int main(){
  while(1){
    int age;
    scanf("%d", &age);
    if (age == 0) break;
    int leaves = 1;

    for (int i = 0; i < age; i++) {
      int grow, cut;
      scanf("%d %d", &grow, &cut);
      // 잎사귀 계산
      leaves = leaves * grow - cut;
      }
    printf("%d\n", leaves);
  }
}