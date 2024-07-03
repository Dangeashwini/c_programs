#include<stdio.h>
void examTime(int iClass){
	switch(iClass){
	case 1:
		printf("ypur exam time is 9am");
		break;
	case 2:
		printf("your exam time is 10am");
		break;
	case 3:
		printf("your exam time is 11am");
		break;
	case 4:
		printf("your exam time is 12pm");
		break;
	default:
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