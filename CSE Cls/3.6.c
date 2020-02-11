#include<stdio.h>
#include<conio.h>
int main()
{
 int x,f=1,i,c=1;
scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
 f=f*c;
 c++;
 }
 printf("%d",f);
}

