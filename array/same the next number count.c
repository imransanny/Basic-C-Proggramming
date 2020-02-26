#include<stdio.h>
int main()
{
    int ary[100];
    int n,a,i;
    printf("enter total number :\n");
    scanf("%d",&n);
    printf("enter the number :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(ary[i]==ary[i+1])
        {
            a=ary[i];
            count++;
        }
    }
    printf("last same number %d \n count the similar number%d",a,count);
}
