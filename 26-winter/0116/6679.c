#include <stdio.h>
#include <math.h>

int main() {
    int i;
    for(int number = 1000; number <= 9999; number++){
      int deciSum = 0;
        for(int i = 0; i < 4; i++){
          int div = (int)pow(10,i);
          deciSum += (number/div)%10;
        }
      int duoSum = 0;
      for(int i = 0; i < 4; i++){
        int div = (int)pow(12,i);
        duoSum += (number/div)%12;
      }
      if(deciSum == duoSum){
        int hexaSum = 0;
        for(int i = 0; i < 4; i++){
          int div = (int)pow(16,i);
          hexaSum += (number/div)%16;
        }
        if(deciSum == hexaSum){
          printf("%d\n", number);
        }
      }
    }
    return 0;
}