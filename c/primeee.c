#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    printf("enter the no ");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("Entered no is not a prime no");
    }
    else {
        for (i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                printf("entered no is not a prime no");
                break;
            }
            else{
                printf("entered no is prime ");
            }
    }
    }
    return 0;
}