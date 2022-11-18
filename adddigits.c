#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,add=0;
printf("enter N");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		add=add+a;
		n=n/10;
	}
	printf("add:%d",add);
	getch();
}