#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int fastestx;
    int fastesty;
    if(x<=w-x) fastestx=x;
    else fastestx = w-x;
    
    if(y<=h-y) fastesty=y;
    else fastesty=h-y;
    
    int fastest;
    if(fastestx <= fastesty) fastest = fastestx;
    else fastest = fastesty;
    printf("%d", fastest);
    return 0;
}