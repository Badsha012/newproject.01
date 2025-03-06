#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+c==b)||(b+c==a)||(c+a==b))printf("YES");
    
    else printf("NO");
}
