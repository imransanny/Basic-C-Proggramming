#include<stdio.h>
int main()
{
    int array[100],i,n,sum=0,count,count2;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   sum=sum+array[i];
   }
   float avg=sum/n;
   for(i==0;i<n;i++){
   if(array[i]<=avg+3&&array[i]>=avg-3)
   {
       count++;
   }
   else
   {
       count2++;
   }}
   printf("near avg %d\n not near avg %d\n",count,count2);
}
