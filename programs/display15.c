#include"header15.h"

void display(int iValue){
	int iCnt=0;
	if(iValue<0){
		printf("enter positive number");  //filter
	}
	for(iCnt=0;iCnt<iValue;iCnt++){
		printf("hello\n");
	}
}
