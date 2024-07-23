
//common factors of the two given numbers.
 #include<stdio.h>
void displayCommonFactors(int iValue1,int iValue2)
{
	int iCnt=0;
	if(iValue1>iValue2)
	{
		for(iCnt=2;iCnt<=iValue1/2;iCnt++)
		{
			if((iValue1%iCnt==0)&&(iValue2%iCnt==0))
			{
				printf("%d\n",iCnt);
			}
		}
	}
	else
	{
		for(iCnt=2;iCnt<=iValue2/2;iCnt++)
		{
			if((iValue1%iCnt==0)&&(iValue2%iCnt==0))
			{
				printf("%d\n",iCnt);
			}
		}
	}
}

int main()
{
	int iFirstNum=0;
	int iSecNum=0;
	printf("enter first number:");
	scanf("%d",&iFirstNum);
	printf("enter second number:");
	scanf("%d",&iSecNum);
	displayCommonFactors(iFirstNum,iSecNum);
	return 0;
}