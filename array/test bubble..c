#include<stdio.h>
int main()
{  int x[]={5,1,9000,100,4,200,6,6};
    int i,a,p,t;
    for(i=0;i<8;i++)
    {
        for(a=0;a<8-i;a++)
        {
            if(x[a]>x[a+1])
            {

            t=x[a];
                x[a]=x[a+1];
                x[a+1]=t;

    }
    }
    }
    for(i=0;i<8;i++)
   {

    printf("  %d  "  ,  x[i]);
}

}
