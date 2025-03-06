#include<stdio.h>

int main()
{
    int year;
    int *p=&year;
    *p=2023;

    if(*p%4==0 && *p%100!=0 || *p%400==0)
    {
        printf("teh year is leap year=%d\n",*p);
    }
    else{
        printf("the year is not leap year=%d\n",*p);
    }

}
