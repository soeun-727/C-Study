#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    char movements[251];
    scanf("%s", movements);

    //시작 점
    int x=0; int y=0;
    //수평이동
    int vertical[10][10] = {0};
    int horizontal[10][10] = {0};

    //이동 로직
    for (int i = 0; movements[i] != '\0'; i++){
        int nextx= x; int nexty= y; 
        //좌표값 변경
        if(movements[i] == 'U') nextx--;
        else if (movements[i] == 'D') nextx++;
        else if (movements[i] == 'R') nexty++;
        else  nexty--;

        //목판 밖으로 나가는 경우 취소
        if(nextx < 0 || nexty < 0 || nextx >= N || nexty >= N) continue;
        
        //수직, 수평 이동 여부 기록
        if(movements[i] == 'U' || movements[i] == 'D'){
            vertical[x][y] = 1;
            vertical[nextx][nexty] = 1;
        } else {
            horizontal[x][y] = 1;
            horizontal[nextx][nexty] = 1;
        }
        x=nextx; y=nexty; //변경된 좌표값 저장
    }

    //출력
    for(int i = 0; i < N; i++){
        for(int j = 0;  j < N; j++){
            if(vertical[i][j] && horizontal[i][j]) printf("+");
            else if(vertical[i][j]) printf("|");
            else if (horizontal[i][j]) printf("-");
            else printf(".");    
        }
        printf("\n");
    }
    
    return 0;
}