#include<stdio.h>
int reverse_number(int a)
{
    int ans;
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
    printf("Program of decimal to octal .\n");
    printf("Enter the binary number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        ans=ans*10+n%8;
        n=n/8;
    }
    ans=reverse_number(ans);
    printf("The number in octal form is :%d",ans);

}
