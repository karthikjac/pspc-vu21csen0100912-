//finding time
#include <stdio.h>
int main()
{
    int d,s,t;
    printf("enter distance in metres");
    scanf("%d",&d);
    printf("enter speed in m per s");
    scanf("%d",&s);
    t=d/s;
    printf("time taken in s is: %d",t);
}
