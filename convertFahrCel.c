#include<stdio.h>

double convertToCelsius(double fah)
{
	return 5/9.0 * (fah-32);
}

double convertToFahrenheit(double cel)
{
	return 9*cel / 5 + 32;
}

int main()
{
	double fahr, cals;
	
	printf("Fahrenheit Equivalent from 0 to 50 Celsius\n");
	printf("Degrees In Celsius\t\t\tDegrees In Fahrenheit\n");
	printf("-------------------------------------------------------------------------\n");
	
	int i;
	for(i=0;i<=50;i+=5)
	{
		fahr = convertToFahrenheit(i);
		printf("%5d \t\t\t\t\t\t%.2lf\n",i,fahr);
	}
	
	printf("Celcius Equivalent from 32 to 140 Fahrenheit\n");
	printf("Degrees In Fahrenheit\t\t\tDegrees In Celsius\n");
	printf("-------------------------------------------------------------------------\n");
	for(i=32;i<=140;i+=18)
	{
		fahr = convertToCelsius(i);
		printf("%5d \t\t\t\t\t\t%.2lf\n",i,fahr);
	}
	
	
}
