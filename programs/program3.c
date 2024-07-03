//readability means change the variable name meaningful

#include<stdio.h>
int main(){
	int iValue1=0;
	int iValue2=0;
	int iResult=0;
	printf("enter first number:\n");
	scanf("%d",&iValue1);
	printf("enter second number:\n");
	scanf("%d",&iValue2);
	iResult=iValue1+iValue2;
	printf("the addition is %d",iResult);
	return 0;
}