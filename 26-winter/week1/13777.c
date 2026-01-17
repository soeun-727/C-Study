#include <stdio.h>

int main(){
  while(1){
    int low = 1;
    int high = 50;
    int mid;
    int rabbit;
    scanf("%d", &rabbit);
    if(rabbit==0){
      break;
    }

    while(low<high){
      mid = (low+high)/2;
      if (rabbit == mid) break;
      else if(rabbit < mid){
        printf("%d ", mid);
        high = mid-1;
      } else{
        printf("%d ", mid);
        low = mid+1;
      }
    }
    printf("%d\n", rabbit);
    
  }
}