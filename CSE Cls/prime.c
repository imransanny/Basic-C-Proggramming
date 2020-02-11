#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {  b=b+1;

        }
    }
        if(b==0)
        {
            printf("prime number");
        }
        else if(b!=0)
        {
            printf("not prime number");
        }

}
