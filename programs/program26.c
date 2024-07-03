#include<stdio.h>
#include<stdbool.h>
bool checkDivisible(int iValue){
	if(iValue%7==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int iNum=0;
	bool iResult=false;
	printf("enter the number\n");
	scanf("%d",&iNum);
	iResult=checkDivisible(iNum);
	if(iResult==true){
		printf("number is divisible by 7");
	}else{
		printf("number is not divisible by 7");

	}
	return 0;
}