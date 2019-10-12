#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("enter number of tiles=");
    scanf("%d",&n);
    printf("no. of ways=%d",fibo(n));
}
