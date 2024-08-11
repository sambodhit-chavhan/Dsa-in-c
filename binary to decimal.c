#include<stdio.h>
#include<math.h>
int main()
{
    int n,ans=0;
    printf("Enter the integer number : ");
    scanf("%d",&n);
    for(int i=0;n!=0;i++)
    {
        int a=n%10;
        ans=ans+((int)pow(2,i))*a;
        n=n/10;
    }
    printf("The integer number is : %d",ans);
}
