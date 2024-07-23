#include<stdio.h>
#include<stdbool.h>
bool checkPalindrome(int iValue)
{
	int iDigit=0;
	int iReverseNum=0;
	int iTemp=0;
	iTemp=iValue;
	while(iValue>0)
	{
		iDigit=iValue%10;
		iReverseNum=iReverseNum*10+iDigit;
		iValue=iValue/10;
	}
	if(iTemp==iReverseNum)
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
	bResult=checkPalindrome(iNum);
	if(bResult==true)
	{
		printf("palindrome number",bResult);
	}
	else
	{
		printf("not palindrome",bResult);
	}
	return 0;
}