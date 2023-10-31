#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    float money;
    scanf("%d",&min);
    if (min<=800){
        money=min*0.9;
    }
    else if (min>800&&min<1500){
        money=min*0.9*0.9;
    }
    else {
        money=min*0.9*0.79;
    }
    printf("%.1f",money);
}
