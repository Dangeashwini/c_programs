//accept a number from user and check if given integer is divisible by 10

#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iValue){
	if(iValue%10==0){
		return true;
	}else {
		return false;
	}
}

int main(){
	int iNum=0;
	bool bResult=false;
	printf("enter the number:");
	scanf("%d",&iNum);
	bResult=checkDivisible(iNum);
	if(bResult==true){
		printf("%d is divisible by 10",iNum);
	}else{
		printf("%d is not divisible by 10",iNum);
	}
	return 0;
}