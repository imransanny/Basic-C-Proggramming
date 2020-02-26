#include<stdio.h>
int main()
{
    int n,i;
    int ary[100];
    printf("input total number ");
    scanf("%d" , &n);
    printf("input the number ");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &ary[i]);
    }
   for(i=0;i<n;i++)
   {
       printf(" %d " , ary[i]);
      }
}
