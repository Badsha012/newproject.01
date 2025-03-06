#include<stdio.h>
int main()
{
    int a,b,diff;
    int *ptr1=&a,*ptr2=&b,*ptr3=&diff;
    *ptr1=18;
    *ptr2=5;
    *ptr3=*ptr1 - *ptr2;
    printf("the different number is=%d\n",*ptr3);
    return 0;

}
