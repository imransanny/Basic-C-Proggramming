#include<stdio.h>
#include<conio.h>
int main()

{
    int x,y;
    scanf("%d%d",&x,&y);
   if(x>0&&y>0)
   {
       printf("the coordinate point lies in the first quadrant ");
   }
   else if(x<0&&y>0)
   {
       printf("the coordinate point lies in the second quadrant");

   }
   else if(x<0&&y<0)
   {
       printf("the coordinate point lies in the third quadrant");
       }
       else if(x>0&&y<0)
       {
           printf("the coordinate point lies in the forth quadrant");
       }
}
