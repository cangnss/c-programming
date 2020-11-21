#include<stdio.h>

void draw_square(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

int main()
{
	int n=3;
	draw_square(n);
	
}
