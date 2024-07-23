#include<stdio.h>
#include<stdbool.h>
int reverseNumber(int iValue)
{
	int iDigit=0;
	int iReverseNum=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		iReverseNum=iReverseNum*10+iDigit;
        iValue=iValue/10;
    }
   return iReverseNum;
}
bool checkPalindrome(int iNum)
{
	int iResult=0;
	iResult=reverseNumber(iNum);
	if(iNum==iResult)
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
	printf("enter any number:");
	scanf("%d",&iNum);
	bResult=checkPalindrome(iNum);
	if(bResult==true)
	{
		printf("palindrome number",bResult);

	}
	else
	{
	printf("not palindrome number",bResult);
    }
	return 0;
}