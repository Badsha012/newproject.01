#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p_n1=(int*) malloc(sizeof(int));
    int *p_n2=(int*) malloc(sizeof(int));
    *p_n1=34;
    *p_n2=68;
    if(*p_n1>*p_n2)
    {
        printf("the maxmimum number is%d\n",*p_n1);

    }
    else
    {
        printf("the maxmimum number is =%d\n",*p_n2);
    }
    return 0;
}
