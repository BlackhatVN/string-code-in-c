#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
{
    char str1[15],str2[15];
    int v;
    printf("value of str1:\n");
    gets(str1);
    printf("str2:\n");
    gets(str2);
    v=strcmp(str1,str2);
    printf("%d",v);
    getch();
}