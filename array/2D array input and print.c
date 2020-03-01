/*#include<stdio.h>
int main()
{
    int x[3][5]={{10,20,30,40,50},{1,2,3,4,5},{5,4,3,2,1}},a,b;
    for(a=0;a<3;a++)
    {
    for(b=0;b<5;b++)
        {
      printf("%d \t",x[a][b]);
        }
        printf("\n");
      }
} */
#include<stdio.h>
int main()
{
    int x[100][100],n,a,b;
    printf("enter controll loop number ");
    scanf("%d",&n);
    printf("enter the is number a*b=?:\n")  ;                    //1st loop a is column and b loop is low row
    for(a=0;a<n;a++)
    {
        for(b=0;b<n;b++)
        {
            scanf("%d",&x[a][b]);

        }
    }
    for(a=0;a<n;a++)
    {
        for(b=0;b<n;b++)
        {
            printf("%d \t",x[a][b]);
        }
        printf("\n");
    }
}

