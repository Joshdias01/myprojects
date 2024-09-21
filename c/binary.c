#include<stdio.h>
int main()
{
    int j,first,last,search,middle,n,a[100],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements in assending order");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the value to find");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(a[middle]<search)
        {
         first=middle+1;
        }
        else if (a[middle]=search)
        {
            printf("%d found at the location %d",search,middle+1);
            break;
        }
       else
       { 
          last=middle+1;
            middle=(first+last)/2;
       }      
    }
    if(first>last)
    printf("not found!");
}
