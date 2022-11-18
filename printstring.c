#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int l;
    char str[15];
    printf("enter any string");
    gets(str);
    l=strlen(str);
    printf("string of length=%d",l);
    puts(str);
}