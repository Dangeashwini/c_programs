//dynamic way means get user input

#include<stdio.h>
int main(){
	int iNum=0;
	printf("how many times do you want to print hello?\n");
	scanf("%d",&iNum);
	int iCnt=0;
	for(iCnt=0;iCnt<iNum;iCnt++){
		printf("hello\n");
	}return 0;
}