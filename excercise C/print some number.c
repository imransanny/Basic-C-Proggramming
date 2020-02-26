#include<stdio.h>
int main(){
int x,i,n,a;
scanf("%d",&x);
for(i=0;i<x;i++)
{
    scanf("%d",&n);
    for(a=i;a<n;a++)
    {
      printf("%d %d",i,a);
    }
    printf("\n");
}
}
