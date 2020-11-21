#include<stdio.h>
//Average program
int main()
{
	double g1,g2,f3,result;
	
	printf("Enter a first grade:");
	scanf("%lf",&g1);
	printf("Enter a second grade:");
	scanf("%lf",&g2);
	printf("Enter a final point:");
	scanf("%lf",&f3);
	
	result = (g1+g2)*40/100 + (f3*60/100);
	
	if(result>=50)
	{
		printf("Successful");
	}
	else
	{
		printf("Unsuccessful");	
	}
	return 0;
	
}
