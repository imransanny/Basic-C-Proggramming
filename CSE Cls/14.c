#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,input,sum=0;
    printf("enter the number of element=");
    scanf("%d",&n);
    for( ; i<=n ; )
    {  printf("input the data number");
        scanf("%d",&input);

        if(input%2==0)

        {
        sum=sum+input;
       i++;

        }
    }
    printf("%d",sum);
}
