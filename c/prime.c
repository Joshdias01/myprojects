#include<stdio.h>
int main()
{
    int i,prime,up,low,n;
    printf("enter the lower limit:");
    scanf("%d",&low);
    printf("enter the upper limit:");
    scanf("%d",&up);
    if(low>=2)
    {
        printf("prime no are:");
        for(n=low+1;n<up;n++)
        {
            prime=1;
            for(i=2;i<n/2;i++)
            if(n%i==0)
            {
                prime=0;
                break;
            }
            if(prime)
            printf("%d",n);  
        }
    }
    else 
    {
        printf("enter the lower no");
    }

}
