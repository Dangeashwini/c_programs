//accept number from user and check if given number is within a specified range(eg. 10 and 20)

#include<stdio.h>
#include<stdbool.h>
bool checkRange(int iValue){

	if((iValue%10==0)&&(iValue%20==0)){
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
	bResult=checkRange(iNum);
	if(bResult==true){
		printf("%d is in range of 10 and 20",iNum);
	}else{
		printf("%d is not in range of 10 and 20",iNum);
	}
	return 0;
}