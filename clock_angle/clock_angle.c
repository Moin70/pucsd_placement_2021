#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[10];
    gets(a);
    int h=(a[0]-'0')*10+(int)(a[1]-'0');
    int m=(a[3]-'0')*10+(int)(a[4]-'0');
    int ang=abs((60*h-11*m)/2);
    if(ang<=180)
    printf("%d",ang);
    else
    printf("%d",360-ang);
    return 0;
}