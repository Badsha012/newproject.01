#include<stdio.h>
int main()
{
    int a,b,rem;
    int *p=&a,*q=&b,*r=&rem;
    *p=80;
    *q=20;
    *r=*p / *q;
    printf("the remainder number is=%d\n",*r);
    return 0;
}