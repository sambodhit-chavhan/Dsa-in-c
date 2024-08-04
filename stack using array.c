#include<stdio.h>
#include<stdlib.h>
int top=-1;

void push(int arr[],int stack[],int el,int capa)
{
    if(top==capa-1)
    {

        printf("Stack Overflow\n");
    }
    else
    {
        for(int i=0; i<el; i++)
        {
            top++;
            stack[top]=arr[i];
        }
    }
}
void pop(int stack[])
{
    if(top==-1)
    {
        printf("Stack empty.\n");
    }
    else
    {
        printf("The deleted value is : %d\n",stack[top]);
        top--;
    }
}
void peek(int stack[])
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("The peek value is : %d\n",stack[top]);
    }
}
void display(int stack[])
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack display.\n");
        for(int i=0; i<=top; i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }

}
void show(int arr[],int capa)
{
    printf("Array display.\n");
    for(int i=0; i<capa; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int capa,ch,el;
    printf("How many element you want to enter in array : ");
    scanf("%d",&capa);
    int arr[capa];
    int stack[capa];
    printf("Enter the %d elements.\n");
    for(int i=0; i<capa; i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    while(1)
    {
        printf("Enter your choice.\n");
        printf("1.Push the element.\n");
        printf("2.Pop the element.\n");
        printf("3.Peek the element.\n");
        printf("4.Display  the element in the stack.\n");
        printf("5.Display  the element in the array.\n");
         printf("6.Exit.\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("How many element you want to push in the stack(<=%d) :",capa);
            scanf("%d",&el);
            if(el>capa)
            {
                printf("!OOPS ,You enter the larger number.\n");
                printf("---------------------------------\n");
                break;
            }
            else
            {
            push(arr,stack,el,capa);
            }
            break;
        case 2:
            pop(stack);
            printf("-----------------------------------------------\n");
            break;
        case 3:
            peek(stack);
            printf("-----------------------------------------------\n");
            break;
        case 4:
            display(stack);
            printf("-----------------------------------------------\n");
            break;
        case 5:
            show(arr,capa);
            printf("-----------------------------------------------\n");
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice.\n");
            printf("-----------------------------------------------\n");
        }
    }
    return 0;
}
