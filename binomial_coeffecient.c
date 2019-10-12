#include<stdio.h>
/*int coeff(int n,int r)         //parcal triangle
{
    if(r==0)
        return 1;
    if(n==r)
        return 1;
    else
        return coeff(n-1,r-1)+coeff(n-1,r);
}*///overlapping subproblem
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int coeff(int n,int k)
{
    int a[n+1][k+1],i,j;
    int arr[k+1];
    for(i=0;i<k+1;i++)
    arr[i]=0;
    arr[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            arr[j]=arr[j]+arr[j-1];
        }
    }
   return arr[k];

   /* for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            a[i][j]=1;
            else
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }*/
    /*for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
    //return a[n][k];
}
int main()
{
    int n,r;
    printf("enter the value of n and r\n");
    scanf("%d %d",&n,&r);
    printf("%d",coeff(n,r));
}
