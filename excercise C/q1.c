#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,i,c,d,a;
    scanf("%d ",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n);
        if(n>=13&&n<=19)
        {
            c++;
        }
        else
        {
            d++;
        }
        for(a=1;a<=n;a++)
        {
            if(c%a==0&&c%a==0)
            {
                c=c/a;
                d=d/a;
            printf("%d : %d",c,d);
            }
            else
                {
                    printf("%d : %d",c,d);
                }
        }

    }
}
