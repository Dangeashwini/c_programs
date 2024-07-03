#include<stdio.h>
void display(int iValue){
	int iCnt=0;
	if(iValue<0){
		printf("enter positive number");  //filter
	}
	for(iCnt=0;iCnt<iValue;iCnt++){
		printf("hello\n");
	}
}

int main(){
	int iNum=0;
	printf("how many times do you want to print hello?\n");
	scanf("%d",&iNum);
	display(iNum);
	return 0;
}