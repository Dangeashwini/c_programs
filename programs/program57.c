#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int iValue){
	int iCnt=0;
	for(iCnt=2;iCnt<iValue;iCnt++){
		if(iValue%iCnt==0){
			return false;
		}else{
			return true;
		}
	}
}
int main(){
	int iNum=0;
	bool bResult=false;
	printf("enter the number:");
	scanf("%d",&iNum);
	bResult=checkPrime(iNum);
	if(bResult==true){
		printf("%d is prime number",iNum);
	}else{
		printf("%d is not prime number",iNum);
	}
	return 0;
}