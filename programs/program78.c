#include<stdio.h>
int calculatePower(int iBase,int iPower){
	int iCnt=0;
	int iResult=1;
	for(iCnt=1;iCnt<=iPower;iCnt++){
		iResult=iResult*iBase;
	}
	return iResult;
}
int main(){
	int iBase=0;
	int iPower=0;
	int iResult=0;
	printf("enter value of base:");
	scanf("%d",&iBase);
	printf("enter value of power:");
	scanf("%d",&iPower);
	iResult=calculatePower(iBase,iPower);
	printf("%d power %d is %d ",iBase,iPower,iResult);
	return 0;

}