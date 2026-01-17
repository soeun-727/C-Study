#include <stdio.h>
#define MAX 1000

int main(){
  int n, q;
  scanf("%d %d", &n, &q);
  int arr[MAX];
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  while(q--){
    int type;
    scanf("%d", &type);

    //1번 쿼리
    if(type == 1){
      int a, b;
      long long print = 0;
      scanf("%d %d", &a, &b);
      for(int i = a; i <=b; i++){
        print += arr[i-1];
      }
      printf("%lld\n", print);
      int temp = arr[a-1];
      arr[a-1] = arr[b-1];
      arr[b-1] = temp;
    //2번 쿼리
    } else {
      int a, b, c, d;
      long long n1 = 0; long long n2 =0;
      scanf("%d %d %d %d", &a, &b, &c, &d);
      for(int i = a; i <=b; i++){
        n1 += arr[i-1];
      }
      for(int i = c; i <=d; i++){
        n2 += arr[i-1];
      }
      n1 -= n2;
      printf("%lld\n", n1);
    }
  }
  return 0;
}