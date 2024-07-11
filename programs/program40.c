//accept a number from user and check if given number is positive ,negative or zero


#include<stdio.h>
void checkNumber(int iValue)
   {  
	   if(iValue>0)
	   {
		printf("given number is positive");
       }
       else if(iValue<0)
       {
		printf("the given number is negative");
       }
	   else
       {
		printf("number is zero");
       }
  }

int main()
 {
	int iNum=0;
	printf("enter the number:");
	scanf("%d",&iNum);
	checkNumber(iNum);
	return 0;
 }