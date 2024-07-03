#include<stdio.h>
void display(int iValue){
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		printf("%d\n",iCnt);
	}
}
int main(){
	int iNum=0;
	printf("enter number:");
	scanf("%d",&iNum);
	display(iNum);
	return 0;

}