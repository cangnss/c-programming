#include<stdio.h>

int main()
{
	int pMoney,result,taxi;
	int choice;
	
	printf("Enter a money:");
	scanf("%d",&pMoney);
	
		if(pMoney>=100000)
		{
			taxi = pMoney*12/100;
			pMoney = pMoney - taxi;
			result = pMoney + ((pMoney*17/100)+(pMoney*15/100));
			printf("%d",result);
		}
		else
		{
			taxi = pMoney*12/100;
			pMoney = pMoney - taxi;
			result = pMoney + (pMoney*15/100);
			printf("%d\n",taxi);
			printf("%d",result);	
		}
}
