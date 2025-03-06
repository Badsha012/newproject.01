#include<stdio.h>
int main()
{
    int i,sum=0;
    float avg;
    int marks[]={60,34,56,78,90};
    //for(i=0;i<=4;i++)
    //{
       // printf("enter marks");
       // scanf("%d",&marks[i]);
    //}
    for(i=0;i<=5;i++){
        sum=sum+marks[i];}
    avg=sum/5;
    printf("the avarage marks=%.2f\n",avg);
    return 0;
}
