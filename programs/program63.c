
//product of all factors of given number.
#include<stdio.h>
int productOfFactors(int iValue)
{
	int iCnt=0;
	int iProduct=1;
	for(iCnt=2;iCnt<=iValue/2;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			printf("%d\n",iCnt);
			iProduct=iProduct*iCnt;
        }
	}
	return iProduct;
	
}

int main()
{
	int iNum=0;
	int iResult=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	iResult=productOfFactors(iNum);
	printf("The product of factors is %d",iResult);
	return 0;
}