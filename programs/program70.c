#include<stdio.h>
int countOfDigit(int iValue){
	int iDigit=0;
	int iDigitCnt=0;
	while(iValue>0){
		iDigit=iValue%10;
		iDigitCnt++;
		iValue=iValue/10;
	}
	return iDigitCnt;
}

int main(){
	int iNum=0;
	int iResult=0;
	printf("enter any number:");
	scanf("%d",&iNum);
	iResult=countOfDigit(iNum);
	printf("count = %d",iResult);
	return 0;
}