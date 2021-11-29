#include<stdio.h>
long fib(int,long[]);
int main()
{
    int n;
    scanf("%d",&n);
    long a[n];
    for(int i=0;i<n;i++)
    a[i]=-1;
    printf("%d",fib(n,a));
    return 0;
}
long fib(int n,long a[])
{
    if(n<=2)
    return 1;
    if(a[n-1]!=-1)
    return a[n-1];
    a[n-1]=fib(n-1,a)+fib(n-2,a);
    return a[n-1];
}