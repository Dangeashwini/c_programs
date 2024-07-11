//accept number from user and check if a given number is greater than 100

#include<stdio.h>
#include<stdbool.h>
bool checkGreaterNumber(int iValue)
{
	if(iValue>100)
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
	printf("enter the number:\n");
	scanf("%d",&iNum);
	bResult=checkGreaterNumber(iNum);
	if(bResult==true)
	{
		printf("%d is greater than 100",iNum);
	}
	else
	{
		printf("%d is not greater than 100",iNum);
	}
	return 0;
}