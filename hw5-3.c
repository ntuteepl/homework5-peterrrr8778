#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hours;
   int money;
   float salary;
   scanf("%d %d",&hours,&money);
   if(hours<=60){
        salary=hours*money;
   }
   else if(hours>60&&hours<120){
        salary=(60*money)+((hours-60)*1.33*money);
   }
   else {
        salary=(60*money)+(60*1.33*money)+((hours-120)*1.66*money);
   }
   printf("%.1f",salary);
}
