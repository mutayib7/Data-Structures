#include<stdio.h>
int main()
{
char str1[10];
char str2[10];

printf("enter a string in lowercase");
gets(str1);
int i=0,j=0;
while(str1[i]!='\0')
{
    str2[j]=str1[i]-32;
    i++;
    j++;
   
}
puts(str2);
}
