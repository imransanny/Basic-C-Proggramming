#include<stdio.h>
int main()
{
    int i, n, sum=0, age[n];
        printf("Enter Number of people.\n");
    scanf("%d",&n);
    printf("Enter Ages of the people.\n");
        for(i=1; i<=n; i++){
        scanf("%d",&age[i]);
      // sum = sum + age[i];
    }

    for(i=1; i<=n; i++){
        printf("%d",age[i]);
    }


}
