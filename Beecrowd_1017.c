#include <stdio.h>
#include <stdlib.h>

int main() {
    float h,km,x;
    scanf("%f",&h);
    scanf("%f",&km);
    
    x=h*km/12;
    printf("%.3f\n",x);
    return 0;
}
