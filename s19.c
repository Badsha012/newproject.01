#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[20]=" ";
    int i;
    s[0]='H';
    s[1]='e';
    s[2]='l';
    s[3]='l';
    s[4]='o';
    s[5]='\0';
    printf("%s\n",s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i])){
            printf("%c",s[i] - 'a' +'A');

        }
        else{
            printf("%c",s[i]);
        }
    }

}
