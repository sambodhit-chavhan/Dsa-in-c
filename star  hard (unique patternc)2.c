#include<stdio.h>
int main()
{
    int n,j,i;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-(n-i+1);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(n-i+1);j++)
        {
            printf("%c ",'*');
        }
        printf("\n");
    }
}
