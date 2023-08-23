#include<stdio.h>

int main(void)
{
    int n,i,j;
    printf("Enter no. of times you want to print star= ");
    scanf("%i",&n);
    for(i=0;i<=n;i++)
     {
        for(j=0;j<i;j++)
        {
            printf("* ");

        }
        printf("\n");
     }
}