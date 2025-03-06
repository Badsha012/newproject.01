#include<stdio.h>

void print_1(int s,int n);
int main()
{
    int n,s;
    print_1(n,s);
    return 0;
}
void print_1(int s,int n){
if(s>n)
{
    return;
}
printf("%d",s);
s +=2;
print_1(s,n);
}
