//accept number from user and check if a given number is multiple of 2 or 3 or 9
#include<stdio.h>
#include<stdbool.h>

bool checkMultiple(int iValue)
{
	if((iValue%2==0)||(iValue%3==0)||(iValue%9==0))
	{
		return true;
	}else
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
	bResult=checkMultiple(iNum);
	if(bResult==true)
	{
		printf("%d is multiple of 2 or 3 or 9",iNum);
	}
	else
	{
		printf("%d is not multiple of 2 or 3 or 9",iNum);
	}
	return 0;
}