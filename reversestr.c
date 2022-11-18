#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[10],str2[10];
    printf("enter the string\n");
    gets(str);
    strcpy(str2,str);
    printf("copy of string=%s",str);
getch();
}