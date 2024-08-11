#include<stdio.h>
int main()
{
    int n,ans=0;
    printf("Enter the digit : ");
    scanf("%d",&n);
    while(n>9)
    {
        ans=0;
    while(n!=0)
    {
        ans=ans+(n%10);
        n=n/10;
    }
   n=ans;
    }
    printf("The single digit is : %d",n);
}
