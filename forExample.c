#include<stdio.h>

int main(){
	double grade1, grade2, average;
	char took;
	int std,num_std;
	
	printf("How many students took the exam?");
	scanf("%d",&num_std);
	
	for(std=1; std<=num_std; std=std+1)
	{
		printf("Enter two grades of student %d:",std);
		scanf("%lf %lf", &grade1, &grade2);
		average = (grade1 + grade2)/2;
		
		if(average>=50){
			printf("Successful");
		}
		else{
			printf("Unsuccessful");
			printf("Have you taken this exam before?(Y/N)");
			scanf("%c",&took);
			if(took=='Y')
			{
				prinft("You can enter again");
			}
			else{
				printf("You cannot enter again");
			}
		}
	}
	/*
		int n, // (input) given number
		i, // loop counter
		sum; // (output) sum of integers from 1 to n
		// Get n
		printf ("Enter n: ");
		scanf ("%d", &n);
		// Initialize sum to zero
		sum = 0;
		// Calculate the sum
		for (i = 1; i <= n; i++)
		{
		sum = sum + i; // or sum += i;
		printf("i'nin suanki degeri:%d\n",i);
		printf("sum'ýn suanki degeri:%d\n",sum);
		}
		
		// Display the sum
		printf ("Sum is %d\n", sum);
*/
	return(0);
	
	
}
