#include<stdio.h>
int main()
{
    int hight,i,h,w;
    float meter,squre,bmi;
    printf(" \t \t \t\t\t \t BMI \n\n");
    printf("   \t Hight :\n");
    printf(" \n \t\t\t    feet : ");
    scanf("%d",&h);
    printf("      \t\t\t inches : ");
    scanf("%d",&i);
    printf("\n      wight :");
    scanf("%d", &w);
    //  hight=floor(h)*12;
    hight = ( h*12 ) + i ;
    meter=(hight * 0.0254 );
    squre=(meter*meter) ;
    bmi=w/squre;
    printf("%d\n%f\n%f\n",hight,meter,squre);
    printf("\tBMI = %f",bmi);

printf("\n\t\t\tccording to the chart :");
     if( bmi < 18 ){
        printf("\n\n BMI:  < 18    (Under weight)");
    }
  else if(bmi>=18 && bmi<=24.9){
      printf("\nBMI 18 : 18-24.9  (Normal)");
  }
  else if(bmi>=25 && bmi<=29.9){
      printf("\nBMI : 25-29.9    (Over weight");
  }
  else if(bmi>=30 && bmi<=34.9){
     printf("\nBMI : 30-34.9    (OBESE)");
  }
  else{
    printf("Extra OBESE");
  }
   printf("\n\nchart of BMI : \n\n");
    printf("\n\n BMI:  < 18    (Under weight)");
    printf("\nBMI 18 : 18-24.9  (Normal)");
    printf("\nBMI : 25-29.9    (Over weight");
    printf("\nBMI : 30-34.9    (OBESE)");

    printf("\n >=35Extra OBESE");

  }

