#include<stdio.h>
int main()
{
    int n,sum=0,i,ary[100];
    printf("enter total number  ");
    scanf("%d", &n);
    printf("enter the number  ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ary[i]);
    sum=sum+ary[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", ary[i]  );
    }
    printf(" sum all of numbers = %d ", sum);
}
