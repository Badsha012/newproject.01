#include<stdio.h>
int main()
{
    int year;
    int *p=&year;
    *p=2024;
    if(*p%4==0 && *p%100!=0 || *p%400==0)
    {
        printf("the year in leap year is=%d\n",*p);
    }
    else{
        printf("the year is not leap yer =%d\n",*p);
    }
    return 0;
}