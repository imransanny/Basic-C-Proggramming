#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,num,sum,rem;
    printf("enter the number of element:");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {  printf("\n input the data number %d=",i);
        scanf("%d",&num);
        rem=num%2;
        if(rem==0)
        {
        sum=sum+num;
       i=i+1;

        }
    }
    printf("the sum is %d",sum);
}

