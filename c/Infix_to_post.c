#include<stdio.h>
#include<stdlib.h>

void evaluate();
int prec(char symb);
char pop();
void push( char item);
char infix[50],postfix[50],stack[50];
int top = -1;

int main()
{
    printf("Enter the infix expression : ");
    scanf("%s",infix);
    printf("\n Entered infix expression is : %s \n ",infix);
    evaluate();
    printf("The Postfix expression for the given infix is %s \n",postfix);
}
void push(char item)
{
    top=top+1;
    stack[top]=item;
}
char pop()
{
    char item;
    item = stack[top];
    top=top-1;
    return item;
}
void evaluate()
{
    char symb,temp;
    int i =0,j=0;
    push('#');
    for (i=0;infix[i] != '/0';i++)
    {
        symb=infix[i];
        switch (symb)
        {
        case '(' : push(symb);
            break;
        case ')':
        temp = pop();
        while(temp != '(')
        {
            postfix[j]= temp;
            temp = pop();
            j++;
        }
        break;
        case '+' :
        case '-' :
        case '*' :
        case '$' :
        case '^' :
        case '%' :
        case '/' :
        while (prec(stack[top])>= prec(symb))
        {
            temp = pop();
            postfix[j]=temp;
            j++;
        }
        push(symb);
        break;
        default: 
        postfix[j]=symb;
        j++;
            break;
        }
    }
}

int prec(char symb)
{
    int p;
    switch(symb)
    {
        case '#':
        p=-1;
        break;
        case '(':
        case ')':
        p=0;
        break;
        case '+':
        case '-':
        p=1;
        break;
        case '*':
        case '%':
        case '/':
        p=2;
        break;
        case '^':
        case '$':
        p=3;
        break;
    }
    return p;
}