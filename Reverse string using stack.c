#include<stdio.h>
#include<string.h>

char stack[100];
int top=-1;
void push(int l,char name[])
{
    for(int i=0; i<l; i++)
    {
        top++;
        stack[top]=name[i];

    }
}

char pop()
{
    if (top >= 0)
    {
        return stack[top--];
    }

    return(stack[top--]);
}

void reverse()
{

    while(top>=0)
    {
        printf("%c",pop());
    }
}

int main()
{
    char name[100];
    printf("Enter your name : ");
    gets(name);
    int l=strlen(name);
    push(l,name);
    reverse();
    return(0);

}
