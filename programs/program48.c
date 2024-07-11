//accept two numbers from user check if the sum of two given numbers os even

#include<stdio.h>
#include<stdbool.h>
bool checkSum(int iValue1,int iValue2)
{
	int iSum=0;
    iSum=iValue1+iValue2;
    printf("The sum of %d and %d is %d\n",iValue1,iValue2,iSum);
	if(iSum%2==0)
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
	bResult=checkSum(iFirstNum,iSecNum);
	if(bResult==true)
	{
		printf("sum is even");
	}
	else
	{
		printf("sum is odd");
	}
     return 0;
}