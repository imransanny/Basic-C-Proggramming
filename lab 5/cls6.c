#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:n=n+1;
    break;
    case 2:n=n+2;
    break;
    case 3:n=n+3;
    break;
    default:
        n=n*2;
    }
    printf("%d",n);
    return 0;
}
