#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int queue[capacity];
int front=-1;
int rear=-1;

void Enqueue()
{
    int value;
    printf("Enter the value : ");
    scanf("%d",&value);
    if(rear==capacity-1)
    {
        printf("Queue is full.\n");
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[rear]=value;
    }
    else
    {
        rear++;
        queue[rear]=value;
    }
}
void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("The dequeue value is : %d\n",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("The peek value at the front is : %d\n",queue[front]);
    }
}
void Itsfull()
{
    if(rear==capacity-1)
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Queue is not full.\n");
    }
}

void Itsempty()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is not empty.\n");
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    while(1)
    {
        int ch;
        printf("Enter your choice.\n");
        printf("1.Enqueue the element.\n");
        printf("2.Dequeue  the element.\n");
        printf("3.Display the queue .\n");
        printf("4.Peek element in the queue.\n");
        printf("5.Check it full or not.\n");
        printf("6.Check it empty or not.\n");
        printf("7.Exit.\n:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            Itsfull();
            break;
        case 6:
            Itsempty();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
