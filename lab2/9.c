#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if((x/100)>(x%100))
    {
        printf("it is bigger then left degit");

    }
    else if((x/100)<(x%100))
    {
        printf("%d it is bigger then right degit %d ",x,x);
    }

}
