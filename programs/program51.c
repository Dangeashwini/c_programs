// accept two numbers from user and check if the difference between two given numbers is positive

#include<stdio.h>
#include<stdbool.h>
bool checkDifference(int iValue1,int iValue2)
{
	int iDifference=0;
    iDifference=iValue1-iValue2;
    printf("The difference between %d and %d is %d\n",iValue1,iValue2,iDifference);
	if(iDifference>0)
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
	int iFirstNum=0;
	int iSecNum=0;
	bool bResult=false;
	printf("enter first number:\n");
	scanf("%d",&iFirstNum);
	printf("enter second number:\n");
	scanf("%d",&iSecNum);
	bResult=checkDifference(iFirstNum,iSecNum);
	if(bResult==true)
	{
		printf("difference is positive");
	}
	else
	{
		printf("difference is negative");
	}
     return 0;
}