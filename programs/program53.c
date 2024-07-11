//single responcibility principle is achieved in this code(SOLID principle)

#include<stdio.h>
#include<stdbool.h>
int sumOfFactors(int iValue)
{
    int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			iSum=iSum+iCnt;

		}
  }
  return iSum;
}
bool checkPerfect(int iValue){
	int iSum=0;
	iSum=sumOfFactors(iValue);
	 if(iSum==iValue)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int iNum=0;
	bool bResult=false;
	printf("enter the number:");
	scanf("%d",&iNum);
	bResult=checkPerfect(iNum);
	if(bResult==true)
	{
		printf("%d is perfect number",iNum);
	}
	else
	{
		printf("%d is not perfect number",iNum);
	}
	return 0;
}