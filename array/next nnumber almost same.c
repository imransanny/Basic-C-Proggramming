#include<stdio.h>
int main()
{
    int x[100], n,i;
    printf("enter the total number");
    scanf("%d",&n);
    printf("enter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }int c=0;
    for(i=0;i<n;i++)
    {
        if(x[i]==x[i+1]||x[i]+1==x[i+1]||x[i]-1==x[i+1])
        {
            c++;
        }
    }
    printf("almost same number count %d",c);
}
