#include<stdio.h>

void max_number(int x,int y,int z);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    max_number(a,b,c);
    return 0;
}
void max_number(int x,int y,int z)
{
    if(x>y && x>z)
    {
        printf("max=%d\n",x);
    }
    else if(y>x && y>z)
        {
            printf("max=%d\n",y);
        }
        else{
            printf("max=%d\n",z);
        }
}
