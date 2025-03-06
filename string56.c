#include<stdio.h>
int main()
{
    char a='123';
    if(a>='A' && a<='Z')
    {
        printf("uppercase number\n");
    }
    else if(a>='a' && a<='z')
    {
        printf("lowercase number\n");
    }
    else if(a>='0' && a<='9')
    {
        printf("digit number\n");

    }
    return 0;
}
