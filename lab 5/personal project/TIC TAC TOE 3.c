#include <stdio.h>
int main()
{
    int x[5][5], a, b, one ,two ;

    printf("\t\t\t\tTIC TAC TOE GAME\n\n\n");
       printf("\t\t\t\t  --|--|--");
         printf("\n\t\t\t\t  --|--|--");
        printf("\n\t\t \t\t  --|--|--");
                    printf("\n2 player : ");

         printf("\n\nenter the any player");


    for(a=0 ; a<3 ; a++)
    {

        for(b=0 ; b<3 ; b++)
        {
            scanf("%d",&x[a][b]);
        }
    }

    if(x[0][0]==0){
        one=x[0][0];
    }
    else if(x[0][0] != 0){
         one=x[0][0];
    }

      for(a=0 ; a<3 ; a++){
        for(b=0 ; b<3 ; b++){

              if(one!=x[a][b]){
                two=x[a][b];
              }
        }}

     if(one==x[0][0] && one==x[0][1] && one==x[0][2]){
         printf("win player 1");
        }
        else if(two==x[0][0] && two==x[0][1] && two==x[0][2]){
            printf("win player 2");
        }
            else if(one==x[1][0] && one==x[1][1] && one==x[1][2]){
                    printf("win player 1");
        }
        else if(two==x[1][0] && two==x[1][1] && two==x[1][2]){
            printf("win player 2");
        }
        else if(one==x[2][0] && one==x[2][1] && one==x[2][2]){
            printf("win player 1");
        }
        else if(two==x[2][0] && two==x[2][1] && two==x[2][2]){
            printf("win player 2");
        }
        else if(one==x[0][0] && one==x[1][0] && one==x[2][0]){
            printf("win player  1");
        }
        else if(two==x[0][0] && two==x[0][1] && two==x[0][2]){
            printf("win player 2");
        }
        else if(one==x[0][0] && one==x[1][1] && one==x[2][2]){
            printf("win player 1");
        }
        else if(one==x[2][0] && one==x[1][1] && one==x[0][2]){
            printf("win player 1");
        }
        else if(two==x[2][0] && two==x[1][1] && two==x[0][2]){
        printf("win player 2");
        }
        else if(two==x[0][0] && two==x[1][1] && two==x[2][2]){
            printf("win player 2");
        }

}
