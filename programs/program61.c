 // All factors of a given number that fall within a specified range [first number, second number]
#include<stdio.h>
void rangeOfFactor(int iValue1,int iValue2,int iValue)
{
	int iCnt=0;
	for(iCnt=iValue1;iCnt<=iValue2 && iCnt<=iValue/2;iCnt++)
	{
		if(iValue%iCnt==0)
			{
				printf("%d\n",iCnt);

			}

		}
	}

int main()
{
	int iFirstNum=0;
	int iSecNum=0;
	int iNum=0;
	printf("enter first number:");
	scanf("%d",&iFirstNum);
	printf("enter second number:");
	scanf("%d",&iSecNum);
	printf("enter the number which you want to print the factor:");
	scanf("%d",&iNum);
	rangeOfFactor(iFirstNum,iSecNum,iNum);
	return 0;
}