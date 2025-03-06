#include<stdio.h>
void print_1(int x);
int main()
{
    int x;
    scanf("%d",&x);

    if(x%2==0){
            x--;}



    print_1(x);
    return 0;
}
void print_1(int x)
{
    if(x<=0)

        return ;



        print_1(x-2);

        printf("%d,",x);

}
