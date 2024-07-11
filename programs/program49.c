// accept number from user and check if the product of two numbers is odd

#include<stdio.h>
#include<stdbool.h>

bool checkProduct(int iValue1,int iValue2)
{
	int iProduct=0;
	iProduct=iValue1*iValue2;
	printf("product of %d and %d is %d\n",iValue1,iValue2,iProduct);
	if(iProduct%2!=0)
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
	bResult=checkProduct(iFirstNum,iSecNum);
	if(bResult==true)
	{
		printf("product is odd");
	}
	else
	{
		printf("product is even");
	}
	return 0;
}