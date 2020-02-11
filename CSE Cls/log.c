
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c=1,i;
    printf("input the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
     printf("%d",n);
}
