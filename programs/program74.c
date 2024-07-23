#include<stdio.h>
int reverseNumber(int iValue)
{
	int iReverseNum=0;
	int iDigit=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		iReverseNum=iReverseNum*10+iDigit;
		iValue=iValue/10;
	}
	return iReverseNum;
}
int main()
{
	int iNum=0;
	int iRev=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	iRev=reverseNumber(iNum);
	printf("reverse number is %d",iRev);
	return 0;

}