#include<stdio.h>
int main()
{
    float ageS,ageM;
    float ratio;
    scanf("%f  %f",&ageS,&ageM);
    ratio=ageS/ageM;
    printf("%f : %f \n %.3f",ageS,ageM,ratio );
}
