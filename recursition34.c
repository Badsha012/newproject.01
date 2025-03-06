#include<stdio.h>
int main()
{
    int n=0,i,*ptr_n;
    ptr_n=&n;
    printf("enter the number:");
    scanf("%d",&*ptr_n);
    for(i=2;i<= *ptr_n;i=i+2)
    {
        printf("%d,",i);
    }
    //printf("\n");
    return 0;

}
