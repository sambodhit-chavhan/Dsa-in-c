#include <stdio.h>
#define MAX 3

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1,count=0;

// Push to Stack 1
void push1(int data) {
    if (top1 < MAX - 1) {
        stack1[++top1] = data;
    } else {
        printf("Stack Overflow\n");
    }
}

// Push to Stack 2
void push2(int data) {
    if (top2 < MAX - 1) {
        stack2[++top2] = data;
    } else {
        printf("Stack Overflow\n");
    }
}

// Pop from Stack 1
int pop1() {
    if (top1 >= 0) {
        return stack1[top1--];
    } else {
        printf("Stack Underflow\n");
        return -1;
    }
}

// Pop from Stack 2
int pop2() {
    if (top2 >= 0) {
        return stack2[top2--];
    } else {
        printf("Stack Underflow\n");
        return -1;
    }
}

// Enqueue operation
void enqueue(int data) {
    if(count!= MAX)
    {
    count++;
    push1(data);
    }
    else
    {
        printf("Queue is full\n");
    }
}

// Dequeue operation
int dequeue() {
    if(top1==-1 && top2==-1)
    {
        printf("Queue is empty.\n");
        return 0;
    }
    if (top2 == -1) {
        for (int i = top1; i >= 0; i--) {
            push2(pop1());
        }
    }
    return pop2();
    count--;

    for(int i=top2;i>=0;i--)
    {
        push1(pop2);
    }
}

// Display queue elements


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);


   printf("Dequeued element: %d\n", dequeue());
   printf("Dequeued element: %d\n", dequeue());
   printf("Dequeued element: %d\n", dequeue());

   printf("Dequeued element: %d\n", dequeue());



    return 0;
}
