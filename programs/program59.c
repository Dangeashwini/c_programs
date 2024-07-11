//time complexity O(N)
#include<stdio.h>
int countOfFactors(int iValue)
{
	int iCnt=0;
	int iCount=0;
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			printf("%d\n",iCnt);
			iCount++;
		}
	}
	return iCount;
}
int main()
{
	int iNum=0;
	int iCount=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	iCount=countOfFactors(iNum);
	printf("Count of factors is %d",iCount);
	return 0;
}