#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y,a,d;
  scanf("%d%d",&x,&y);
 d=0;
 for(a=1;a<=3;a++)
  {
        if(x>0&&y>0)
        {
            d=d+1;
        }
        else if(x>0&&y<0)
   {
    d=d+1;
        }
        else if(x<0&&x<0)
        {
            d=d+1;
        }
   }
    printf("there are 2 point in 1st quadrant  \n there are 1 point in 1st quadrant  \n there are 0 point in 1st quadrant",d);
}
