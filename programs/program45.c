//Q6 WAP to accept two numbers from user check if a given number is divisible by second number

#include<stdio.h>
#include<stdbool.h>
bool checkDivisible(int iValue1,int iValue2){
	if(iValue1%iValue2==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int iFirstNum=0;
	int iSecNum=0;
	bool bResult=false;
	printf("enter first number:\n");
	scanf("%d",&iFirstNum);
	printf("enter second number:\n");
	scanf("%d",&iSecNum);
	bResult=checkDivisible(iFirstNum,iSecNum);
	if(bResult==true){
		printf("%d is divisible by %d",iFirstNum,iSecNum);
	}else{
		printf("%d is not divisible by %d",iFirstNum,iSecNum);
	}
	return 0;
}