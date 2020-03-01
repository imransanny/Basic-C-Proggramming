#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    printf("input 2 number : ");
    scanf(" %d %d", &a, &b);
    int x[100];
    printf("enter the number :\n");
    for(i=0 ; i<a ; i++)
    {
        scanf("%d  ",&x[i]);
    }
    for(i=0; i<a; i++){
      if( x[i] >= x[b] ){
            c++;
        }
    }
    printf(" %d " , c);
}
