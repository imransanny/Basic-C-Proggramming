#include<stdio.h>
int main()
{
    int array[100],i,n,even=0,odd=0;
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
     for(i=0;i<n;i++){
     if(array[i]%2==0)
     {
      even=even+array[i];
     }
     else
     {
         odd=odd+array[i];
     }}
   printf("evensum %d\n oddsum %d\n",even,odd);

}
