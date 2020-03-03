
#include<stdio.h>
#include<conio.h>
int main()
{
    int rc,rb,h,r;
    scanf("%d%d%d%d",&rc,&rb,&r,&h);
    if(rc>rb)
    {
        printf("the ball can store within the container");


    }
    else if((2*3.14*r)*h>=2*3.24*h)
    {
        printf("the ball can store within the container");
    }
    else

    {
        printf("the ball cannot store within the container");
    }
}
