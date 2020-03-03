#include<stdio.h>>
int main()
{
    int array[1000],i,n,sum=0,evensum=0,oddsum=0;
    printf("how many number");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
  for(i=0;i<n;i++)
  {
      sum=sum+array[i];
  }
  for(i=0;i<n;i++){
  if(array[i]%2==0)
  {
      evensum=evensum+array[i];
  }
  else
  {
      oddsum=oddsum+array[i];
  }
  }
  printf("%d\n %d\n %d\n ",sum,evensum,oddsum);


}
