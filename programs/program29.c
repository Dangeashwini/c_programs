// #include<stdio.h>
// void cheakResult(int iMarks){
// 	if(iMarks>0 && iMarks<35){
// 		printf("fail");
// 	}
// 	else if(iMarks>=35 && iMarks<50){
// 		printf("pass");
// 	}
// 	else if(iMarks>=50 && iMarks>60){
// 		printf("sec class");
// 	}
// 	else if(iMarks>=60 && iMarks>75){
// 		printf("first class");

// 	}

// 	else if(iMarks>=75 && iMarks<100){
// 		printf("pass with distinction");
// 	}
// 	else{
// 		printf("invalid input");
// 	}
// }

// int main(){
// 	int iMarks=0;
// 	printf("enter marks:\n");
// 	scanf("%d",&iMarks);
// 	checkResult(iMarks);
// 	return 0;



// }

#include<stdio.h>
void checkResult(float fValue){
	if(fValue>0 && fValue<35){
		printf("fail");
	}
	else if(fValue>=35 && fValue<50){
		printf("pass");
	}
	else if(fValue>=50 && fValue<60){
		printf("sec class");
	}
	else if(fValue>=60 && fValue<75){
		printf("first class");
	}
	else if(fValue>=75 && fValue<=100){
		printf("pass with distinction");
	}
	else{
		printf("invalid input");
	}

}


int main(){
float fValue=0.0;
printf("enter your marks\n");
scanf("%f",&fValue);
checkResult(fValue);
return 0;
}
