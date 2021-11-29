#include<stdio.h>
int main()
{
    long a=-1,b=1,c;
    int n,i=0;
    scanf("%d",&n);
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
        i++;
    }
    printf("%ld",c);
}