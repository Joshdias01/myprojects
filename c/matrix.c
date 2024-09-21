#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    printf("enter the size of the first matrix");
    scanf("%d%d",&m,&n);
    printf("enter the size of second matrix");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter the elements of first matrix");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter elements of second matrix");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        } 
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("the  product of 2 matrix is ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\n",c[i][j]);
            }
        }
    }
    else 
    printf("multiplication not possible");

}