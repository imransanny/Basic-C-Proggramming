/*#include<stdio.h>
int main()
{
    int x[4][5]={{76,90,60,70,50},{99,75,80,88,45},{76,66,61,23,32},{23,80,45,88,91},{20,50,77,66,99}},a,b;
    float avg;
    for(a=0 ; a<4 ; a++){
      int s=0;
      for(b=0 ; b<5 ; b++){
        s=s + x[a][b];
        }
        avg = s/5.0;
        int c=0;
        for(b=0 ; b<5 ; b++)
        {
            if(x[a][b]>avg)
            {
                c++;
            }
        }
        printf("%d",c);
        printf("\n");
    }
} */
#include<stdio.h>
int main()
{
    int x[100][100],a,b,n;
    printf("enter the number :");
    scanf("%d ",&n);
    printf(" enter the row and column number:\n " );
     for(a=0 ; a<n ;a++ ){
        for(b=0 ; b<n+1 ; b++){
            scanf("%d" ,&x[a][b]);
        }
     }

     float avg;
    for(a=0 ; a<n ; a++){
      float s=0;
      for(b=0 ; b<n+1 ; b++){
        s=s + x[a][b];
        }
        avg = s/b;
        int c=0;
        for(b=0 ; b<n+1 ; b++)
        {
            if(x[a][b]>avg)
            {
                c++;
            }
        }
        printf("%d",c);
        printf("\n");
    }
}

