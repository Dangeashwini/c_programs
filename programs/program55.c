//numbers in reverse order
#include<stdio.h>
void displayNumber(int iValue){
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		printf("%d\n",iCnt);
	}
}
int main(){
	int iNum=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	displayNumber(iNum);
	return 0;

}