#include<stdio.h>
int main()
{
    int hight,i,h,w;
    float meter,squre,bmi;
    int n,celsius,z,farenhite,kelvin,c,k,f;
    printf("\t\t\t1.Temperature \n \t\t\t2. BMI ");
    printf("\n\n\t\tenter the input number : ");
    scanf("%d",&z);
    if(z==1 || z==2){
    switch(z)
    {
    case 1 :
        printf("tempeture\n\n");

        printf("1. celsius \n2. farenhite \n3. kelvin \n\n\nEnter the number :  ");

        scanf("%d",&n);
        if(n==1 || n==2 || n==3){
        switch(n)
        {
        case 1 :
            printf("write temperature in celsius: ");
            scanf("%d",&celsius );
            f=((celsius*9)/5)+32;
            k=celsius +273;
            printf(" farenhite : %d \nkelvin : %d \n ",f,k);
            break;

        case 2 :
            printf("write temperature in farenhite ");
            scanf("%d",&farenhite);
            c=(farenhite*5-32*5)/9;
            k=((farenhite-32)*5)/9+273;
            printf(" celsius %d \nkelvin %d\n",c,k);
            break;

        case 3:
            printf("write temperature in kelvin  ");
            scanf("%d",&kelvin);
            c=(kelvin-273)*5/5;
            f=(((kelvin-273)*9)/5)+32;
            printf("celsius %d \nfarenhite %d\n",c,f);
        }

        }
        else if (n!=1 || n!=2 || n!=3){
            printf("\n\n\t\tenter the number 1 or 2 or 3 \n\n");
        }

         break;

    case 2 :

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
        if( bmi < 18 )
        {
            printf("\n\n BMI:  < 18    (Under weight)");
        }
        else if(bmi>=18 && bmi<=24.9)
        {
            printf("\nBMI 18 : 25-24.9  (Normal)");
        }
        else if(bmi>=25 && bmi<=29.9)
        {
            printf("\nBMI : 25-29.9    (Over weight");
        }
        else if(bmi>=30 && bmi<=34.9)
        {
            printf("\nBMI : 30-34.9    (OBESE)");
        }
        else
        {
            printf("Extra OBESE");
        }
        printf("\n\nchart of BMI : \n\n");
        printf("\n\n BMI:  < 18    (Under weight)");
        printf("\nBMI 18 : 25-24.9  (Normal)");
        printf("\nBMI : 25-29.9    (Over weight");
        printf("\nBMI : 30-34.9    (OBESE)");

        printf("\n >=35Extra OBESE");

    }}
    else{
        printf("\n\t\t\enter the input number 1 or 2 \n\n");
    }
}
