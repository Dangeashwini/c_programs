#include<stdio.h>
int add(int iValue){
	if(iValue<0){
		iValue=-iValue;
	}
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main(){
	int iNum=0;
	int iResult=0;
	printf("enter number:");
	scanf("%d",&iNum);
	iResult=add(iNum);
	printf("addition is =%d",iResult);
	return 0;
}