#include<stdio.h>
int sum(int a,int b,int c);
int main()
{
    int x,y,z,r;
    scanf("%d%d%d",&x,&y,&z);
    r=sum(x,y,z);
    printf("summation=%d\n",r);

}
int sum(int a,int b,int c)
{
    int s;
    s=a+b+c;
    return (s);
}
