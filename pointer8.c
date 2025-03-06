#include<stdio.h>
// find the minimum three number
/// @return 
int main()
{
    int a,b,c;
    int *p=&a,*q=&b,*r=&c;
    *p=12;
    *q=9;
    *r=8;
    if(*p<*q && *p<*r)
    {
        printf("the minmimun number is=%d\n",*p);
    }
    else if(*q<*r && *q<*r)
    {
        printf("the minmum number is=%d\n",*q);
    }
    else{
        printf("the minmum number is=%d\n",*r);
    }
    return 0;
}