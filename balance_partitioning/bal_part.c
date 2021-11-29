#include<stdio.h>
#include<stdlib.h>
int rSum(int[],int,int);
int main()
{
    int *a,n,lsum=0,rsum=0;
    int minsum=2147483647,crntsum=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    a[i]=2*i+4;
    for(int i=1;i<n-2;i++)
    {
        lsum+=a[i-1];
        rsum=rSum(a,i+1,n-1);
        crntsum=abs(lsum-rsum);
        if(crntsum<minsum)
        minsum=crntsum;
    }
    printf("%d",minsum);
    return 0;
}
int rSum(int arr[],int start,int end)
{
    int sum=0;
    for(int i=start;i<=end;i++)
    {
        sum+=arr[i];
    }
    return sum;
}