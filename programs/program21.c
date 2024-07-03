#include<stdio.h>
#include<stdbool.h>
bool checkOdd(int iValue){
	if(iValue%2!=0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int iNum=0;
	bool bResult=false;
	printf("enter the number:\n");
	scanf("%d",&iNum);
    bResult=checkOdd(iNum);
    if(bResult==true){
    	printf("number is odd\n");
    }else{
    	printf("number is even");
    }
    return 0;
}