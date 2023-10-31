#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    int min;
    float angle;
    scanf("%d,%d",&h,&min);
    if (min!=0){
        angle=h*30-(11*min)/2.0;
    }
    else{
        (angle=360-(h*30-(11*min)/2.0));
    }
    printf("%.3f",angle);
}


