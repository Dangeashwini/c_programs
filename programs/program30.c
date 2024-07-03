#include<stdio.h>
void jwellersPortal(int iWeighht){
	if(iWeighht==1){
		printf("your gold amount is 5k");
	}
	else if(iWeighht==2){
		printf("your gold ammount is 10k");
	}
	else if(iWeighht==4){
		printf("your gold amount is 20k");
	}else if(iWeighht==8){
		printf("your gold amount is 40k");
	}else{
		printf("wrong Weighht");
	}
}

int main(){
	int iWgt=0;
	printf("enter the gold weight:\n");
	scanf("%d",&iWgt);
	jwellersPortal(iWgt);
	return 0;
}