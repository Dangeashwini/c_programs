#include<stdio.h>
void displayNonFactors(int iValue){
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue;iCnt++){
		if(iValue%iCnt!=0){
			iSum=iSum+iCnt;
			
			}
	  }
	  
	printf(" the sum of non factors of %d is = %d",iValue,iSum);

}

int main(){
	int iNum=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	displayNonFactors(iNum);
	return 0;
}