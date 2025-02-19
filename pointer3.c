#include<stdio.h>
int result(int a,int b,int *s);
int main()
{
    int x,y,sum;
    scanf("%d%d",&x,&y);
    result(x,y,&sum);
    printf("summacation of=%d\n",sum);
    return 0;
}
int result(int a,int b,int *s)
{
    *s=a+b;
    return *s;
}
