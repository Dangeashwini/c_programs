//time complexity is O(N)

#include<stdio.h>
void displayNonFactors(int iValue){
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		if(iValue%iCnt!=0){
			printf("%d\n",iCnt);
		}
	}
}

int main(){
	int iNum=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	displayNonFactors(iNum);
	return 0;
}