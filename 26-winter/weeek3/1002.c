#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--){
      int x1, y1, r1, x2, y2, r2;
      scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

      if(x1==x2 && y1==y2) {
        if(r1== r2) printf("-1");
        else printf("0");
      }
      //최대 두개인데 좌표가 음수일 수 없으니 그런 경우 1개
      else{
        
      }


    }
    return 0;
}