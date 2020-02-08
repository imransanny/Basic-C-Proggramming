#include<stdio.h>
#include<conio.h>
int main()
{
    int n,odd,even;
    scanf("%d",&n);
    if(n%2==0)
    {
     odd=n+1;
     printf("the next odd number %d",odd);
    }
    else
    {  even=n+2;
        printf("the next odd number %d",even);
    }
}
