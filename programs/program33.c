#include<stdio.h>
#include<stdbool.h>
bool centuryYear(int iYear){
	if(iYear%100==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int iYear=0;
	bool bResult=false;
	printf("enter the year:\n");
	scanf("%d",&iYear);
	bResult=centuryYear(iYear);
	if(bResult==true){
		printf("Year %d is century year",iYear);
	}else{
		printf("Year %d is not century year",iYear);
	}
	return 0;
    
}