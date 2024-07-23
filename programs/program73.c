#include<stdio.h>
int sumOfEvenDigits(int iValue){
	int iDigit=0;
	int iSum=0;
	while(iValue>0){
		iDigit=iValue%10;
		if(iDigit%2==0){
			iSum=iSum+iDigit;
		}
		iValue=iValue/10;
	}
	return iSum;
}

int main(){
	int iNum=0;
	int iResult=0;
	printf("enter any number:");
	scanf("%d",&iNum);
	iResult=sumOfEvenDigits(iNum);
	printf("sum=%d",iResult);
	return 0;
}