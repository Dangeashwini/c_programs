#include<stdio.h>
void jwellersPortal(int iWeighht){
	switch(iWeighht){
	case 1:
		printf("your gold amount is 5k");
		break;
	case 2:
		printf("your gold amount is 10k");
		break;
	case 4:
		printf("your gold amount is 20k");
		break;
	case 8:
		printf("your gold amount is 40k");
		break;
	default:
		printf("invalid weight");
	}
}

int main(){
	int iWgt=0;
	printf("enter the gold weight:\n");
	scanf("%d",&iWgt);
	jwellersPortal(iWgt);
	return 0;
}