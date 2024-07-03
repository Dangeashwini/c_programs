#include<stdio.h>
#include<stdbool.h>
bool checkMultiple(int iValue){
	if((iValue%3==0)&&(iValue%5==0)){
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
	iResult=checkMultiple(iNum);
	if(iResult==true){
		printf("the number is multiple of 3 and 5");
	}else{
		printf("the number is not multiple of 3 and 5");
	}
	return 0;
}