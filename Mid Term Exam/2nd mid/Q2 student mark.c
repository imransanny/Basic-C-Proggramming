/* Q2 : a class id well balanced if difference between number of student who got more than average marks and number of students
 who got less than average marks is not more than 3 .now your task is to check whether a class is well balanced or not.
  develop a C program which take marks of the student of a class as input and store them into a one- dimensional
   array and displays whether the class is well balanced or not.
 */
 #include<stdio.h>
  int main(){
  int x[0], a, b, n ,c=0 , d=0;
  float avg, sum=0 ;
  scanf("%d",&n);

  for(a=0 ; a<n ; a++){
      scanf("%d",&x[a]);
       sum=sum+x[a];
  }
  avg=sum/n;
  if(avg<x[a]){
    c++;
  }
  else if (avg>x[a]){
    d++;
  }
  if(c<=3 && d<=3){

    if(c==d){
        printf("yes well balance");
    }
    else{
        printf("not well balancce");
    }
  }
  }

