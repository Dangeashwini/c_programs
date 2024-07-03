/*************************************************************
 Function name:main
 Description: its an entry point function
 input: NA
 output:
 date:11/6/2024
 author:Ashwini Dange
 * *************************************************************/

//use header file in another file

// #include<stdio.h>
// int addition(int,int);
#include"header8.h"
int main(){
	int iValue1=0;
	int iValue2=0;
	int iResult=0;
	printf("enter first number:\n");
	scanf("%d",&iValue1);
	printf("enter second number:\n");
	scanf("%d",&iValue2);
	iResult=addition(iValue1,iValue2);
	if(iValue1<0){
		printf("enter positive number\n");
	}else{

	
	printf("the addition is %d",iResult);
}
	return 0;
}