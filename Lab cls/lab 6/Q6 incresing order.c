#include<stdio.h>
int main()
{
    int array[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
}
