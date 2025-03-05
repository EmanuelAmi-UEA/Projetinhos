#include<stdio.h>
main()
{
char str[8], *p;
int i;
printf("Digite uma palavra:");
gets(str);
p = str;
printf("%c",p);
for(i=strlen(str)-1; i>=0; i--)
{
printf("%c",*(p+i));
}
}