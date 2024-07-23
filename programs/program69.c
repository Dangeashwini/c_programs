#include<stdio.h>
int displayDigit(int iValue)
{
	int iDigit=0;
	while(iValue>0)
	{
		iDigit=iValue%10;
		printf("%d",iDigit);
       iValue=iValue/10;
    }
   return iDigit;
}
int main(){
	int iNum=0;
	int iResult=0;
	printf("enter any number:");
	scanf("%d",&iNum);
	iResult=displayDigit(iNum);
	printf("%d",iResult);
	return 0;
}