//Header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

//Defining the structure.
struct order
{
    int no;
    float total;
    struct  order *next;
    char arr[1000];
} *head=0,*newnode,*tail=0,*temp;


void America()
{
    newnode=(struct order*) malloc(sizeof(struct order));
    printf("How many America no coffee do you want : ");
    scanf("%d",&newnode->no);

    newnode->next=0;
    newnode->total=(newnode->no)*280;

    printf("Total amount is : %.2f\n",newnode->total);


    strcpy(newnode->arr,"America no");
    printf("Pay bill on the counter.\n");
    if(head==0)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}

void Espresso()
{
    newnode=(struct order*) malloc(sizeof(struct order));
    printf("How many Espresso  coffee do you want : ");
    scanf("%d",&newnode->no);
    newnode->next=0;
    newnode->total=(newnode->no)*264;
    printf("Total amount is : %.2f\n",newnode->total);

    strcpy(newnode->arr,"Espresso ");
    printf("Pay bill on the counter.\n");

    temp=tail;
    if(head==0)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}
void Cappuccino()
{
    newnode=(struct order*) malloc(sizeof(struct order));
    printf("How many Cappuccino coffee do you want : ");
    scanf("%d",&newnode->no);
    newnode->next=0;
    newnode->total=(newnode->no)*450;
    printf("Total amount is : %.2f\n",newnode->total);


    temp=tail;
    if(head==0)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}
void Latte()
{
    newnode=(struct order*) malloc(sizeof(struct order));
    printf("How many Latte coffee do you want : ");
    scanf("%d",&newnode->no);
    newnode->next=0;
    newnode->total=(newnode->no)*372;
    printf("Total amount is : %.2f\n",newnode->total);

    printf("Pay bill on the counter.\n");
    strcpy(newnode->arr,"Latte");

    temp=tail;
    if(head==0)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}
void Black()
{
    newnode=(struct order*) malloc(sizeof(struct order));
    printf("How many Black coffee do you want : ");
    scanf("%d",&newnode->no);
    newnode->next=0;
    newnode->total=(newnode->no)*292;
    printf("Total amount is : %.2f\n",newnode->total);

    printf("Pay bill on the counter.\n");
    strcpy(newnode->arr,"Black");

    temp=tail;
    if(head==0)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }

}
void max()
{
    if(head==0)
    {
        printf("No order yet today.\n");
        return;
    }
    int n;
    char str[1000];
    float max=INT_MIN;
    temp=head;
    while(temp !=0)
    {
        if((temp->total) > max)
        {
            max=temp->total;
            strcpy(str,temp->arr);
            n=temp->no;
        }
        temp=temp->next;
    }
    printf("Maximum bill  is : %d %s  %f\n",n,str,max);
    printf("\n");

}
void min()
{
    if(head==0)
    {
        printf("No order yet today.\n");
        return;
    }
    int n;
    char str[1000];
    float min=INT_MAX;
    temp=head;
    while(temp !=0)
    {
        if(temp->total<min)
        {
            min=temp->total;
            strcpy(str,temp->arr);
            n=temp->no;
        }
        temp=temp->next;
    }
    printf("Minimum bill is:%d %s  %2.f\n",n,str,min);
}

void sales()
{
    if(head==0)
    {
        printf("No order yet today.\n");
        return;
    }
    float total_sales=0;
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->no);
        puts(temp->arr);

        total_sales+=temp->total;
        printf("\n");

        temp=temp->next;

    }
    printf("Total  sale is: %f",total_sales);
    printf("\n");
}
int main()
{

    int ch=1;
    while(ch)
    {
        printf("Enter your choice.\n");
        printf("1.America no coffee(280).\n");
        printf("2.Espresso coffee(264).\n");
        printf("3.Cappuccino coffee(450).\n");
        printf("4.Latte coffee(372).\n");
        printf("5.Black coffee(292).\n");
        printf("6.exit \n:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            America();
            printf("\n");
            break;
        case 2:
            Espresso();
            printf("\n");
            break;
        case 3:
            Cappuccino();
            printf("\n");
            break;
        case 4:
            Latte();
            printf("\n");
            break;
        case 5:
            Black();
            printf("\n");
            break;
        case 6:
            printf("Thank you for visiting.\n");
            exit(0);
        case 7:
            max();
            printf("\n");
            break;
        case 8:
            min();
            printf("\n");
            break;
        case 9:
            sales();
            printf("\n");
            break;
        default:
            printf("Invalid choice.\n");
            printf("\n");
        }
    }


}
