//Display the biggest digit

#include<stdio.h>
#include<conio.h>
int main()
{
    int i, biggestNumber = 0;
    scanf("%d",&input);
    for(i=1;i<=input;i++){
        int mod = input % 10; // Last digit from input
        input = input / 10; // Remove last digit input
        if(mod > biggestNumber){
            biggestNumber = mod;
        }
    }
    printf("%d",a);
    return 0;
}
