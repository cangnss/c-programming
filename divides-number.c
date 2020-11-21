#include<stdio.h>

int main()
{
	int a,b,r;
	printf("Enter a first number:");
	scanf("%d",&a);
	print("Enter a second number:");
	scanf("%d",&b);
	
	if(b!=0)
	{
		r = a/b;
		printf("%d",r);
	}
	else
	{
		printf("Second number won't be 0");
	}
	return 0;
}
