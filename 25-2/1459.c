#include <stdio.h>

#define ll long long

int main() {
    ll X, Y, W, S;
    scanf("%lld %lld %lld %lld", &X, &Y, &W, &S);

    //X, Y 중 작은 쪽만큼은 대각선으로 갈 수 있음
    ll minXY = (X < Y) ? X : Y;
    ll maxXY = (X > Y) ? X : Y;

    ll result = 0;

    if (S >= 2 * W) {
        //대각선이 비효율적 -> 전부 직선으로 이동
        result = (X + Y) * W;
    } 
    else if (S >= W) {
        //대각선이 한 번의 직선보다 싸거나 같고, 두 번보단 비싸지 않음
        result = minXY * S + (maxXY - minXY) * W;
    } 
    else {
        //대각선이 가장 효율적일 때
        ll diff = maxXY - minXY;
        //짝수면 전부 대각선으로 이동 가능, 홀수면 마지막 한 칸 직선
        if (diff % 2 == 0)
            result = maxXY * S;
        else
            result = (maxXY - 1) * S + W;
    }

    printf("%lld\n", result);
    return 0;
}
