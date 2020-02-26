#include<stdio.h>
int main()
{
    int n,i,ary[100];
    float sum=0,avg;
    printf("enter the total number");
    scanf("%d",&n);
  printf("enter the number: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
      sum=sum+ary[i];
    }
     avg=(sum/n);
    for(i=0;i<n;i++)
    {
        printf("%d \n",ary[i]);
    }
    printf("number of sum= %d \n",sum);
    printf("number of average= %d",avg);

}
