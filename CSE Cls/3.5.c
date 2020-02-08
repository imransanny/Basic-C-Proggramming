#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0,a;

scanf("%d",&a);
for(i=1;i<=a;i++)
     {


     if(a%i==0)
     {
         sum=sum+i;
     }
     }
printf("%d",sum);

}
