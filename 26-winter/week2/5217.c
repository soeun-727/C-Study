#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
      int n;
      scanf("%d", &n);
      printf("Pairs for %d: ", n);
      int prev =0;
      for(int i =1; i <=n; i++){
        if(i >= n-i){
          printf("\n");
          break;
        } else{
          if(prev > 0)printf(", ");
          printf("%d %d", i, n-i);
          prev++;
        }
      }

    }    
    return 0;
}