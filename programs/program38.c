//time complexity is O(N/2)

#include<stdio.h>
void displayFactors(int iValue){
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iValue/2;iCnt++){
		if(iValue%iCnt==0){
			iSum=iSum+iCnt;
			printf("%d\n",iCnt);

		}


	}
	printf("%d\n",iValue);
	printf("The sum of all factors of %d is = %d",iValue,iSum+iValue);

}

int main(){
	int iNum=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	displayFactors(iNum);
	return 0;
}