#include<stdio.h>
#include<math.h>
int main()
{
	int mph;
	printf("Enter a mph:");
	scanf("%d",&mph);
	
	if(mph<=25)
	{
		printf("Not a strong wind");
	}
	else if(mph>=25 && mph<39)
	{
		printf("Strong wind");
	}
	else if(mph>=39 && mph<55)
	{
		printf("Gale");
	}
	else if(mph>=55 && mph<=72)
	{
		printf("Whole Gale");
	}
	else{
		printf("Hurricane");
	}
	
	return 0;
	
		
}
