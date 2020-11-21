#include<stdio.h>

int main()
{
	double grade1,grade2,average;
	char took;
	
	printf("Enter a first grade:");
	scanf("%lf",&grade1);
	printf("Enter a second grade:");
	scanf("%lf",&grade2);
	
	average = (grade1+grade2)/2;
	
	if(average<=50)
	{
		printf("Did you take the exam:");
		scanf("%c",&took);
		
		if(took==89 && took==121)
		{
			printf("Unsuccessful,and has no other chance");
		}
		else
		{
			printf("Unsuccessful,but has one more chance");
		}
	}
	else
	{
		printf("Unsuccessful");
	}
		
}
