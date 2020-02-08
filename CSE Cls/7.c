#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=90&&x<=100)
    {
        printf(" grade A");
    }
    else if(x>80)
    {
        printf("grade B");
    }
    else if(x>70)
    {
        printf("grade C");
    }
    else if(x>60)
    {
        printf("grade D");
    }
}
