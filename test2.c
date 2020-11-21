#include<stdio.h>

int myFactorial(int n)
{
	int n_fact=1,i;
	for(i=2;i<=n;i++)
	{
		n_fact*=i;	
	}
	return n_fact;
}

void draw_line(){
	printf("---------------\n");
}

void draw_nline(int a)
{
	int i;
	for(i = 1; i<=a; i++)
	{
		printf("-");
	}
	printf("\n");
}

void draw_char(int b, int theChar)
{
	int i;
	for(i=0;i<=b;i++)
	{
		printf("%c",theChar);
	}
	
}

int main(){
	/*int n=6,k=4, n_fact=1, k_fact=1,i,nminusk,nminusk_fact=1;
	
	for(i=2;i<=n;i++)
	{
		n_fact *= i;
	}
	for(i=2;i<=k;i++)
	{
		k_fact *= i;
	}
	
	nminusk = n - k;
	for(i=2;i<=nminusk;i++)
	{
		nminusk_fact *= i;
	}
	
	printf("n factorial is:%d\n", n_fact);
	printf("k factorial is:%d\n", k_fact);
	printf("n minus k factorial is:%d\n",nminusk_fact);
	printf("The output is:%d\n", n_fact / (k_fact * nminusk_fact));*/
	
	int n=6,k=4,n_fact=1,k_fact=1,nminusk,nminus_fact=1;
	n_fact = myFactorial(n);
	printf("%d\n",n_fact);
	draw_line();
	k_fact = myFactorial(k);
	printf("%d\n",k_fact);
	draw_line();
	nminusk = n - k;
	nminus_fact = myFactorial(nminusk);
	printf("%d\n",nminus_fact);
	
	draw_nline(4);
	draw_char(12,'$');
	
	return 0;
}


