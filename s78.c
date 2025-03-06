#include<stdio.h>
struct person{
char name[50];
int citno;
float salary;}
person1;
int main ()
{
    person1.citno=1984;
    //person1.name=Badsha sheikh;
    person1.salary=2500;
    printf("name:%s\n",person1.name);
    printf("citizenship no:%d\n",person1.citno);
    printf("salary:%.2f\n",person1.salary);
    return 0;

}

