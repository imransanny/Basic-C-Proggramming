/*
write a c program which can input some students exam marks (each student appears for several exams) into a 2D array and display
the highest marks and also display which student get that mark.
sample input: 27 25 21
              30 21 29
              27 15 30
              23 15 27
sample output :30
              student 2 get the highest marks

              */
#include<stdio.h>
 int main(){
 int x[100][100], i, j, max, c, n, m ;
  scanf("%d%d",&n,&m);
  for(i=0 ; i<n ; i++){
        for(i=0 ; i<m ; i++){
            scanf("%d",&x[i][j]);
        }
    }
    max=x[0][0];
    c=0;
    for(i=0 ; i<n ; i++){
        for(j=1 ; j<m ; j++){

            if(x[i][j] >= max ){
                max=x[i][j];
                c++;
            }
        }
    }
    printf("%d%d",max,c);
}

