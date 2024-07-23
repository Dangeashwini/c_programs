#include<stdio.h>
void evenOfDigit(int iValue){
	int iDigit=0;
	while(iValue>0){
		iDigit=iValue%10;
		if(iDigit%2==0){
			printf("%d\n",iDigit);
		}
		iValue=iValue/10;
	}
}

int main(){

	int iNum=0;
	printf("enter any number:");
	scanf("%d",&iNum);
	evenOfDigit(iNum);
	return 0;
}