#include<stdio.h>

int main()
{
    int r,l;
   float v,ball,cylinder;
    scanf("%d %d",&r,&l);
    ball=(3.14*r*r);
    cylinder=(3.14*r*r*l);
    v=cylinder-ball;
    printf(" volume of water %d ",v);
}
