#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    int num[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&num[i]);

    }
    printf("the number are \n");
    for(i=0;i<x;i++)
    {
        printf("%d \n",num[i]);
    }
}
