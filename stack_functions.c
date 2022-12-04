#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int top = -1;
int arr[MAX];

// array implementation of stack
void display()
{
    int i = top;
    if (top < 0)
    {
        printf("There is no data in the stack");
    }
    for (i; i >= 0; i--)
    {
        printf("  %d", arr[i]);
    }
    printf("\n");
}
void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
        return;
    }

    top = top + 1;
    arr[top] = data;
    display();
}
void pop()
{
    if (top < 0)
    {
        printf("Stack underflow");
        return;
    }
    int popped_data = arr[top];
    top--;
    printf("\nThe popped data is %d\n", popped_data);
    display();
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();

    return 0;
}