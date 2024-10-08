#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int top = -1,   array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;
    while (1)
    {
        printf("\n  Perform operations on the stack:");
        printf("\n  1.Push the element\n  2.Pop the element\n   3.Show\n   4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\n  Invalid choice!!");
        }  // end of switch
    }  // end of while
}    // end of main

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack:");
        scanf("%d",  &x);
        top = top + 1;
        array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\n Popped element: %d",  array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int  i = 0 ;  i <= top;i++)
            printf("%d\n", array[i]);
    }
}