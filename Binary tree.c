#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char name[50];
    int salary;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct LinkedListNode
{
    char name[50];
    int salary;
    struct LinkedListNode *next;
} LinkedListNode;

Node *createNode(char *name, int salary)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->salary = salary;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insertBST(Node *root, char *name, int salary)
{
    if (root == NULL)
    {
        return createNode(name, salary);
    }
    if (salary < root->salary)
    {
        root->left = insertBST(root->left, name, salary);
    }
    else
    {
        root->right = insertBST(root->right, name, salary);
    }
    return root;
}

void displayBySalary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    displayBySalary(root->left);
    printf("%s\n", root->name);
    displayBySalary(root->right);
}

Node *findMaxSalary(Node *root)
{
    if (root == NULL || root->right == NULL)
    {
        return root;
    }
    return findMaxSalary(root->right);
}

Node *findMinSalary(Node *root)
{
    if (root == NULL || root->left == NULL)
    {
        return root;
    }
    return findMinSalary(root->left);
}

LinkedListNode *createLinkedListNode(char *name, int salary)
{
    LinkedListNode *newNode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
    strcpy(newNode->name, name);
    newNode->salary = salary;
    newNode->next = NULL;
    return newNode;
}

LinkedListNode *insertLinkedList(LinkedListNode *head, char *name, int salary)
{
    LinkedListNode *newNode = createLinkedListNode(name, salary);
    newNode->next = head;
    return newNode;
}

int totalMonthlyExpenses(LinkedListNode *head)
{
    int total = 0;
    LinkedListNode *current = head;
    while (current != NULL)
    {
        total += current->salary;
        current = current->next;
    }
    return total;
}

int main()
{
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    Node *bstRoot = NULL;
    LinkedListNode *linkedListHead = NULL;

    for (int i = 0; i < numEmployees; i++)
    {
        char name[50];
        int salary;
        printf("Enter employee %d's name: ", i + 1);
        scanf("%s", name);
        printf("Enter employee %d's salary: ", i + 1);
        scanf("%d", &salary);

        bstRoot = insertBST(bstRoot, name, salary);
        linkedListHead = insertLinkedList(linkedListHead, name, salary);
    }

    printf("Employees by Salary:\n");
    displayBySalary(bstRoot);

    Node *maxSalaryNode = findMaxSalary(bstRoot);
    Node *minSalaryNode = findMinSalary(bstRoot);
    printf("Maximum Salary Employee: %s ,%d\n", maxSalaryNode->name, maxSalaryNode->salary);
    printf("Minimum Salary Employee: %s ,%d\n", minSalaryNode->name, minSalaryNode->salary);

    int totalExpenses = totalMonthlyExpenses(linkedListHead);
    printf("Total Monthly Expenses: %d\n", totalExpenses);

    return 0;
}
