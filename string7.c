#include<stdio.h>
int main()
{
    char s[]="borrowers of books spoil the symmetry of shelves";
    int i;
    while(s[i]!=0)
    {
        printf("%c%c\n",s[i],*(s+i));
        printf("%c%c\n",s[i],*(i+s));
        i++;
    }
    return 0;

}
