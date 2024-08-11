#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",'*');
        }
        for(j=0;j<(n-1-i)+(n-i-1);j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%c",'*');
        }
        for(j=0;j<((i+1)+(i+1));j++)
        {
            printf(" ");
        }
        for(int j=0;j<n-i;j++)
        {
            printf("%c",'*');
        }
        printf("\n");

    }
}
