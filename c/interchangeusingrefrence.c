#include<stdio.h>
#include<conio.h>
void interchange(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void main()
{
    int c,d;
    c=10;
    d=20;
    printf("before interchange c=%d & d=%d",c,d);
    interchange(&c,&d);
    printf("after interchanged c=%d & d=%d", c,d);
    getch();

}