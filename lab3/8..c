#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0,a,highst=0;
    float x = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("age number\n");
        scanf("%d",&a);
            if(a>highst)
            {
                highst=a;
            sum=sum+a;
        }

    }
    x = (float) sum / n;
    printf("average age %.2f \n highst age %d",x,highst);

}
