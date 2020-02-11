#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a+b>c&&b+c>a&&c+a>b)
 {
     printf("triangle");
 }
 else
 {
     printf("not triangle");
 }
}
