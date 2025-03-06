#include<stdio.h>
#include<string.h>
int main()
{
  enum department{
    assembly,manufacturing,accounts,stores
  };
  struct employee
  {
    char name[30];int age;enum department dept;
  };
  struct employee e;
  strcpy (e.name,"lother mattheus");
  e.age =28;
  e.dept =manufacturing;
  printf("name=%s\n",e.name);
  printf("age =%d\n",e.age);
  printf("deparment=%d\n",e.dept);
  if(e.dept== accounts)
  printf("%s is an accounts\n",e.name);
  else
  printf("%s is not accounant\n",e.name);
  return 0;
}