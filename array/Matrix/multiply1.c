#include<stdio.h>
 int main()
{
    int xA[3][3]={{4,6,8},{3,5,4},{1,2,4}},a,b;
    int xB[3][3]={{3,9,1},{2,6,4},{5,4,7}},i,c,d,e,j;
    int z[5][5];
    printf("A Matrix :\n ");
    for(a=0 ; a<3 ;a++ ){
        for(b=0 ; b<3 ; b++){
            printf("%d " ,xA[a][b]);
       }
        printf("\n");
    }
    printf("\n");
    printf("B Matrix :\n");
   for(d=0 ; d<3 ; d++){
        for(e=0 ; e<3 ; e++){
            printf(" %d   " ,xB[d][e]);
    }
        printf("\n");
    }
    int sum=0;
    for(a=0 ; a<3 ; a++){
        for(b=0 ; b<3 ; b++){
            for(d=0 ; d<3 ; d++){
                sum=sum+(xA[a][d]*xB[d][b]);

            }
            z[a][b]=sum;
            sum=0;
        }
    }
    printf("multiply : A*B \n \n");
    for(a=0 ; a<3 ; a++){
        for(b=0 ; b<3 ; b++){

      printf("%d  ",z[a][b]);
        }
        printf("\n");
    }
}

