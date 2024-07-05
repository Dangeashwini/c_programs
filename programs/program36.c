//time complexity is O(N/2)  we reduce time coplexity in this program

#include<stdio.h>
void displayFactors(int iValue){
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue/2;iCnt++){
		if(iValue%iCnt==0){
			printf("%d\n",iCnt);
		}
	}printf("%d",iValue);
}

int main(){
	int iNum=0;
	printf("enter number:");
	scanf("%d",&iNum);
	displayFactors(iNum);
	return 0;
}