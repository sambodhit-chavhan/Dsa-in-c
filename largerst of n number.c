#include<stdio.h>
int main()
{
    int n,a,b,big;
    printf("How many numbers you to compare: ");
    scanf("%d",&n);
    printf("Enter the first number : ");
    scanf("%d",&a);
     big=a;
    int  small=a;
    for(int i=0;i<n-1;i++)
    {
        printf("Enter the next number : ");
        scanf("%d",&b);
        if(b>a)
        {
            big=b;
        }
        else
        {
            small=b;
        }
    }
    printf("The bigger number is : %d\n",big);
    printf("THe smaller number is: %d\nn",small);

}
