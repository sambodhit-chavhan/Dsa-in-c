#include<stdio.h>
int reverse_integer(int a)
{
    int ans=0;
    while(a!=0)
    {
        ans=ans*10+a%10;
        a=a/10;
    }
    return(ans);
}
int main()
{
    int n,ans=0;
    printf("Program of decimal to binary.\n");
    printf("Enter the integer number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        //Method 1
        ans=ans*10+(n%2);
        n=n/2;
        //Method 2
       // ans=ans*10+(n&1);
        //n=n>>1;

    }
    ans=reverse_integer(ans);
    printf("The decimal number is: %d",ans);
}

