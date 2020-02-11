#include<stdio.h>
int main()
{
    int i, n,a, sum=0, age[n];
    printf("Enter Number of people.\n");
    scanf("%d",&n);
    printf("Enter Ages of the people.\n");
        for(i=1;i<=n;i++){
        scanf("%d",&age[i]);
       sum = sum + age[i];
    }
    float avg;
    avg = (sum / n);
    printf("The Average of Age is %.2f",avg);

    }



