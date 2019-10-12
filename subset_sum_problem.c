#include<stdio.h>
#include<stdbool.h>
int main()
{
    int val[6]={2,5,7,9,11,13};
    int count=6,i,j,sum=16;
    bool a[count+1][sum+1];
    for(i=0;i<=16;i++)
        printf("%d ",i);
    printf("\n");
    for(i=0;i<=sum;i++)
        a[0][i]=false;
    for(i=0;i<count;i++)
        a[i][0]=true;

    for(i=1;i<count+1;i++)
    {
        for(j=1;j<sum+1;j++)
        {
            if(val[i-1]>j)
                a[i][j]=a[i-1][j];
            else
                a[i][j]=a[i-1][j]||a[i-1][j-val[i-1]];
        }
    }


    for(i=0;i<count+1;i++)
    {
        for(j=0;j<sum+1;j++)
        {
        printf("%d ",a[i][j]);
        }
    printf("\n");
    }

        if(a[count][sum]==1)
            printf("true");
        else
            printf("false");

}
