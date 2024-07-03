#include<stdio.h>
void examTime(int iClass){
	if(iClass==1){
		printf("your exam is at 9AM");
	}
	else if(iClass==2){
		printf("your exam is at 10AM");
	}
	else if(iClass==3){
		printf("your exam is at 11AM");
	}
	else if(iClass==4){
		printf("your exam is at 12PM");
	}
	else{
		printf("invalid input");
	}
}

int main(){
	int iStd=0;
	printf("enter your standard:\n");
	scanf("%d",&iStd);
	examTime(iStd);
	return 0;
}