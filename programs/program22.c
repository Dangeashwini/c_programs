#include<stdio.h>
int add(int iValue){
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		if(iCnt%2==0){
			iSum=iSum+iCnt;
		}
	}return iSum;

}
int main(){
	int iNum=0;
	int iResult=0;
	printf("enter the number:\n");
	scanf("%d",&iNum);
	iResult=add(iNum);
	printf("addition of even number is =%d\n",iResult);
	return 0;
}