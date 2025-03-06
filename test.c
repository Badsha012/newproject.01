#include<stdio.h>
int main()
{
   /* int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a/b;
    printf("%d\n",x);
    y=a%b;
    printf("%d\n",y);*/
    int a,b,c,sum;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf(" sum=%d\n",sum);
    avg=sum/3;
    printf("averge=%.2f\n",avg);
    return 0;
}