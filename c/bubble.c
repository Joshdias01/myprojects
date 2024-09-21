#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[10],n,i;
    printf("enter the number of array ");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }
return 0;
}