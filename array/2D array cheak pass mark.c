#include<stdio.h>
int main()
{
    int x[100][100],a,b,c,n;
    scanf("%d",&n);
    for(a=0 ; a<n ; a++)
    {
        for(b=0 ; b<n+2 ; b++)
        {
            scanf("%d",&x[a][b]);
        }
    }

    for(a=0 ; a<n ; a++)
    {
        c=0;
        for(b=0 ; b<n+2 ; b++)
        {
            if("x[a][b]>=60")
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
