#include<stdio.h>
//find the three number maxmimum number
int main()
{
    int x,y,z;
    int *n1=&x,*n2=&y,*n3=&z;
    *n1=6;
    *n2=8;
    *n3=9;
    if(*n1>*n2 && *n1>*n3)
    {
        printf("the maxmim number is=%d\n",*n1);

     }
     else if(*n2>*n3 && *n2>*n1)
     {
        printf("the maxmimum number is=%d\n",*n2);
     }
     else{
        printf("the maxmimum number is=%d\n",*n3);
     }
     return 0;

}