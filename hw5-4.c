#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    float min;
    float angle;
    scanf("%f %f",&h,&min);

        angle=((h*30.0)-((11.0*min)/2.0));
        if (angle < 0) {
            angle = -angle;
        }

        if (angle > 180){
            angle = 360 - angle;
        }


    printf("%.3f",angle);
}
