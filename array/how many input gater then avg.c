#include<stdio.h>
int main()
{
    int n,i,ary[100];
    float avg,sum=0;
    printf("enter total number:  ");
    scanf("%d",&n);
    printf("enter the input number:\n ");
    for(i=0;i<n;i++)
    {
     scanf("%d", &ary[i]);
     sum=sum+ary[i];
    }
    avg=ceil(sum/n);
   int count=0;
    for(i=0;i<n;i++)
    {
        if(ary[i]>avg);
        {
            count++;
        }
    }
    printf(" gather then avg number %d"  ,count);
}
