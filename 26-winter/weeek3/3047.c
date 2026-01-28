#include <stdio.h>

int main() {
    int A, B, C, first, second, third;
    scanf("%d %d %d", &A, &B, &C);

    int sort[3] = {A, B, C}; int temp;
    for(int i = 0;i<2; i++){
      if(sort[i] > sort[i+1]){
        temp = sort[i];
        sort[i] = sort[i+1];
        sort[i+1] = temp;
      }
    }
    for(int i = 0;i<1; i++){
      if(sort[i] > sort[i+1]){
        temp = sort[i];
        sort[i] = sort[i+1];
        sort[i+1] = temp;
      }
    }

    char order[4];
    scanf("%s", order);
    for (int i = 0; i<3; i++){
      if(order[i] == 'A') printf("%d ", sort[0]);
      else if (order[i] == 'B') printf("%d ", sort[1]);
      else printf("%d ", sort[2]);
    }
    return 0;
}