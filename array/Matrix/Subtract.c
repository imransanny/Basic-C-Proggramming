#include<stdio.h>
int main()
{
    int xA[3][3]={{1,2,3},{4,5,6},{6,7,8}},a,b;
    int xB[3][3]={{3,2,1},{7,8,4},{2,4,9}},i,c,d,e,j;
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
    printf("\n");
    printf("A-B = C Matrix:\n");
    for(c=0 ; c<3 ; c++){
            for(i=0 ; i<3 ; i++){

        z[c][i]=xA[c][i]-xB[c][i];
    printf("%d  " , z[c][i]);
    }
    printf("\n");
}
}


