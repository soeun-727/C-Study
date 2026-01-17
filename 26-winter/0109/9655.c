#include <stdio.h>
#include <stdbool.h>

int main(){
  int N;
  scanf("%d", &N);

  bool winner; //sk=true, cy=false

  //3으로 나눈 몫이 짝수면 CY 
  if((N/3) % 2 == 0) winner=false;
  //3으로 나눈 몫이 홀수면 SK
  else winner=true;
  
  //3으로 나눈 뒤 남은 개수가 1이면 우승자가 바뀜
  if((N%3) == 1) winner = !winner;
  //3으로 나누어 떨어질 때,3으로 나눈 뒤 남은 개수가 짝수일 땐 그대로 
  
  if (winner == true) printf("SK");
  else printf("CY");
  return 0; 
  }
