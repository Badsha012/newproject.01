#include<stdio.h>
void odd_even(int n);
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    odd_even(a);
    return 0;
}
void odd_even(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}
