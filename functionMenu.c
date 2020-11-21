#include<stdio.h>

void menu(){
	printf("MENU\n-----\n1.Draw a line of 10 starts\n2.Draw a line of N stars\n3.Draw a triangle\n4.Exit\n");
}

void draw_n_stars(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
}

void draw_triangle(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j == i || i == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main()
{
	
	
	int choice,starCount;
	do{
	
	menu();
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	while(choice<1 || choice>4){
		printf("Wrong input!");
		scanf("%d",&choice);
	}
	
	switch(choice){
		case 1:
			draw_n_stars(10);
			break;
		case 2:
			printf("How many stars?");
			scanf("%d",&starCount);
			draw_n_stars(starCount);
			break;
		case 3:
			printf("How many lines does the triangle have?");
			scanf("%d",&starCount);
			draw_triangle(starCount);
			break;
	}
	}while(choice!=4);
	
	return 0;
}
