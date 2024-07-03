#include<stdio.h>
#include<stdbool.h>
bool checkMultiple(int iValue){
	if(iValue%3==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int iNum=0;
	printf("enter the number\n");
	scanf("%d",&iNum);
	bool iResult=false;
	iResult=checkMultiple(iNum);
	if(iResult==true){
		printf("the number is multiple of 3");
	}else{
		printf("number is not multiple of 3");
	}
	return 0;
}