#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;

void Enqueue(int arr[],int queue[],int el,int capacity)
{
    if(rear==capacity-1)
    {
        printf("Queue is full.\n");
    }
    for(int i=0; i<el; i++)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            queue[i]=arr[i];
        }
        else
        {
            rear++;
            queue[rear]=arr[i];
        }
    }
}


void Dequeue(int queue[])
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


void display(int queue[])
{
    if(front==-1 && rear==-1)
    {
        printf("Queue  is empty.\n");
    }
    else
    {
        for(int i=0; i<=rear; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


void show(int arr[],int capacity)
{
    for(int i=0; i<capacity; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void peek(int queue[])
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


void Itsfull(int queue[],int capacity)
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


void Itsempty(int queue[] )
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


int main()
{
    int capacity;
    printf("How many element you want to insert in the array : ");
    scanf("%d",&capacity);
    int arr[capacity];
    int queue[capacity];
    printf("Enter the %d elements.\n",capacity);
    for(int i=0; i<capacity; i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    while(1)
    {
        int ch,el;
        printf("Enter your choice.\n");
        printf("1.Enqueue the element.\n");
        printf("2.Dequeue  the element.\n");
        printf("3.Display the queue .\n");
        printf("4.Peek element in the queue.\n");
        printf("5.Check it queue full or not.\n");
        printf("6.Check it queue empty or not.\n");
        printf("7.Display array.\n");
        printf("8.Exit.\n:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

            printf("How many element  in the array you want to enqueue in the queue : ");
            scanf("%d",&el);
            if(el>capacity)
            {
                printf("OOPS ! You enter the larger number\n.");
                break;
            }
            else
            {
                Enqueue(arr,queue,el,capacity);
            }
            printf("-----------------------------------\n");
            break;
        case 2:
            Dequeue(queue);
            printf("-----------------------------------\n");

            break;
        case 3:
            display(queue);
            printf("-----------------------------------\n");

            break;
        case 4:
            peek(queue);
            printf("-----------------------------------\n");

            break;
        case 5:
            Itsfull(queue,capacity);
            printf("-----------------------------------\n");

            break;
        case 6:
            Itsempty(queue);
            printf("-----------------------------------\n");

            break;
        case 7:
            show(arr,capacity);
            printf("-----------------------------------\n");

            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid choice.\n");
        }
    }

}
