//check number is multiple of 3


#include<stdio.h>
int checkMultiple(int iValue){
    int iSum=0;
    while(iValue>0){ 
        iSum=iSum+iValue%10;   //add remainder of value in sum
        iValue=iValue/10;     //devide value by 10 and add 

    }
    return iSum;
}

int main(){
    int iNum=0;
    int iResult=0;
    printf("enter the number:\n");
    scanf("%d",&iNum);
    iResult=checkMultiple(iNum);
    printf("the sum  of digit of number is %d\n",iResult);
    if(iResult%3==0){
        printf("The number %d of sum %d is multiple of 3",iNum,iResult);

    }else{
        printf("The number %d of sum %d is not multiple of 3",iNum,iResult);
    }
    return 0;
}