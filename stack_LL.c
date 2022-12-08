#include <stdio.h>
#include <stdlib.h>

struct stack_node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int num)
{
    struct stack_node *newNode;
    newNode = malloc(sizeof(newNode));
    if(newNode == NULL)
    {
        printf("Stack overflow");
        exit(1);
    }
    if(top == 0){
        newNode->data = num;
        newNode->link = NULL;
        top = newNode;
    }   
    newNode->data = num;
    newNode->link = top;
    top = newNode;

    printf("The link part of newnode %d", newNode->link);
}

void display()
{
    struct stack_node *temp;

    temp = top;

    while (temp)
    {
        printf(" %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
    
}

void main()
{
    push(1);

    display();
}
