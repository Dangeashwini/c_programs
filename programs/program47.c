// accept a year from user and check if a given year is a century year (ends with 100)

#include<stdio.h>
#include<stdbool.h>
bool checkCenturyYear(int iYear){
	if(iYear%100==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int iYear=0;
	bool bResult=false;
	printf("enter the year:");
	scanf("%d",&iYear);
	bResult=checkCenturyYear(iYear);
	if(bResult==true){
		printf("%d year is century year",iYear);
	}else{
		printf("%d year is not century year",iYear);
	}
	return 0;
}