#include<stdio.h>

int result(int a,int b);
int main()
{
    int x,y,sum;
    scanf("%d%d",&x,&y);
    sum=result(x,y);
    printf("summacation=%d\n",sum);

    return 0;

}
int result(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
