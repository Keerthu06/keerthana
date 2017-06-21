#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if((ch>='a'&&ch<'z')||(ch=='A'&&ch=='Z'))
printf("%c is an alphabet");
else
printf("%c is not an character");
}
