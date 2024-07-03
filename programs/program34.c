#include<stdio.h>
int calculateAmount(int iWeighht){
	int iAmount=0;
	iAmount=iWeighht*5000;
	return iAmount;

}
int main(){
	int iWgt=0;
	printf("enter the Weighht of gold in kg:\n");
	scanf("%d",&iWgt);
	int iResult=0;
	iResult=calculateAmount(iWgt);
	printf("%d kg gold is at Rs %d",iWgt,iResult);
	return 0;

}