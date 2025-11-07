#include <stdio.h>

int main(){
  int N, M; 
  scanf("%d %d", &N, &M);
  char arr[51][51];

  for (int i = 0; i < N; i++) { //색칠된 값 입력받기
    scanf("%s", arr[i]);
  }

  int result = 64; //최대로 64칸을 다시 칠함

  //8*8으로 만들 수 있는 모든 보드 시작 위치 탐색
  for(int y = 0; y <= N-8; y++){
    for(int x = 0; x<=M-8; x++){
      int paintW = 0; //(y, x)에서 시작해 왼쪽 위가 흰색
      int paintB = 0; //(y, x)에서 시작해 왼쪽위가 검은색

      //8*8로 잘라낼 보드 검사
      for(int i = 0; i < 8; i++){
        for(int j=0; j<8; j++){
          //i+j가 짝수면 시작 색과 같도록

          //W로 시작
          if((i+j)%2 ==0){
            if(arr[y+i][x+j] != 'W')
              paintW++;
          }else{
            if(arr[y+i][x+j] != 'B')
              paintW++;
          }

          //B로 시작
          if((i+j)%2 ==0){
            if(arr[y+i][x+j] != 'B')
              paintB++;
          }else{
            if(arr[y+i][x+j] != 'W')
              paintB++;
          }
        }
      }
      //더 작은 거 선택
      int tempMin = (paintW < paintB) ? paintW:paintB;
      //결과 갱신
      if(tempMin < result)
        result = tempMin;
    }
  }
  printf("%d\n", result);
  return 0;
}