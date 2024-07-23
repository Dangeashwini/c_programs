#include<stdio.h>
int displaySum(int iValue1,int iValue2){
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue2;iCnt++){
		iSum=iSum+iValue1;
	}
	return iSum;
}
int main(){
	int iNum1=0;
	int iNum2=0;
	int iResult=0;
	printf("enter first number:");
	scanf("%d",&iNum1);
	printf("enter second number:");
	scanf("%d",&iNum2);
	iResult=displaySum(iNum1,iNum2);
	printf("sum is %d",iResult);
	return 0;

}