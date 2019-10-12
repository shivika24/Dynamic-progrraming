#include<stdio.h>
int main()
{
    int val[3]={2,5,10};
    int n=3,m=13,i,j;
    int arr[n+1][m+1];
    for(i=0;i<m+1;i++)
        arr[0][i]=0;
    for(i=1;i<n+1;i++)
        arr[i][0]=1;

        /*arr[1][0]=1;
        arr[2][0]=1;
        arr[3][0]=1;*/
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<m+1;j++)
        {
            if(val[i-1]>j)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=arr[i-1][j]+arr[i][j-val[i-1]];
        }
    }
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<m+1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("%d",arr[n][m]);
}
