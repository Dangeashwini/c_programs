#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int iValue){
	int iCnt=0;
	int iCount=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		if(iValue%iCnt==0){
			iCount++;
		}
	}
	if(iCount==2){
		return true;
	}else{
		return false;
	}

}

int main(){
	int iNum=0;
	bool bResult=false;
	printf("enter the number:");
	scanf("%d",&iNum);
	bResult=checkPrime(iNum);
	if(bResult==true){
		printf("%d is prime",iNum);
	}else{
		printf("%d is not prime",iNum);
	}
	return 0;
}