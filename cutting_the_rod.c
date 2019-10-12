#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,i,j,length;
    printf("enter value of n=");
    scanf("%d",&n);
    int le[n],p[n];
    for(i=0;i<n;i++)
        scanf("%d",&le[i]);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("enter the length of given rod=");
    scanf("%d",&length);
    /*int le[8]={1,2,3,4,5,6,7,8};
    int p[8]={1,5,7,8,11,13,13,15};*/
    int lc=n,pc=n,dummy;
    int arr[lc+1][length+1];
    for(i=0;i<length;i++)
        arr[0][i]=i+1;
    for(i=1;i<lc;i++)
    {
        for(j=0;j<length;j++)
        {
           if(le[i-1]>j)
            arr[i][j]=arr[i-1][j];
           else if(j<le[i])
            arr[i][j]=max(p[i],arr[i-1][j]);
           else
           {
           arr[i][j]=max(arr[i-1][j],arr[i][j-le[i]]+p[i]);
           }
        }
    }
    for(i=0;i<lc;i++)
    {
        for(j=0;j<length;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
