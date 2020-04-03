#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,i,c,d;
    //input person number
    printf("person");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    { //input person age
        printf("person age \n");
        scanf("%d",&n);
        if(n>13&&n<19)
        {   //number count
            c++;
        }
        else
        {
            d++;
        }
        for(i=1;i<=n;i++)
        {
           if(c%i==0&&d%i==0)
           {
               c=c/i;
               d=d/i;
               printf("ratio = %d : %d",c,d);
               break;
           }
           else
           {
            printf(" ratio =%d : %d",c,d);
           }
        }

    }

}
