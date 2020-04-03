/*
Q1: write a C program which takes temperature of last seven days of Dhaka city as input and store
them into a one -dimensional array and display difference of number days between highest and the lowest days temperature.

sample input : 27 19 21 30 21 29 27   sample output :2
*/
#include<stdio.h>
 int main(){
  int x[100], n, i, j, max, min, p, s, diff;
  scanf("%d",&n);

  for(i=0 ; i<n ; i++){

    scanf("%d", &x[i]);
  }
  max=x[0];
  min=x[0];
  for(i=0 ; i<n ; i++){

        if(x[i] >= max){
                max=x[i];
        p=i;
    }
    }
    for(j=0 ; j<n ; j++){
        if(x[j]<=min){
            min=x[j];
            s=j;
        }
    }
    diff=p-s;
    printf("diff : %d",diff);
  }


