#include<stdio.h>
int main()
{
    int a,i,x,d=0,e=0,c;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&x);
       int count=0;
        for(c=2;c<x;c++)
        {
            if(x%c==0)
            {
                count++;
            }
            if(count==0)
            {
               d++;

            }
            else if(count!=0)
            {
                e++;
            }
        }
    }printf("prime number %d \n not prime number %d",d,e);

}
