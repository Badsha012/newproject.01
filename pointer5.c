#include<stdio.h>
int main()
{
    int a,b,quo;
    int *p=&a,*q=&b,*r=&quo;
    *p=12;
    *q=6;
    *r=*p * *q;
    printf("the quation =%d\n",*r);
    return 0;
}