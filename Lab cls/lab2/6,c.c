#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z,angle;
    scanf("%d%d%d",&x,&y,&z);
    angle=x+y+z;
    if(angle==180)
    {
        printf("trianglevis valid");
    }
    else
    {
        printf("triangle is not valid");

    }
}
