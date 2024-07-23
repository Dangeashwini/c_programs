//total number of perfect numbers within a specified range
#include <stdio.h>
#include<stdbool.h>
bool isPerfect(int iNum) 
{
    int iSum = 0;
    int iCnt=0;

    for (int iCnt = 1; iCnt <= iNum / 2; iCnt++) 
    {
        if (iNum % iCnt == 0) 
        {
            iSum =iSum+iCnt;
        }
    }
    if( iSum == iNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int countOfPerfect(int iValue1,int iValue2)

{
    int iCnt=0;
    bool bValue=false;
    int iCount=0;
     for (int iCnt = iValue1; iCnt <= iValue2; iCnt++) 
     {
        bValue=isPerfect(iCnt);
            if(bValue==true)
            {
                printf("%d\n",iCnt);
                iCount++;
            }
        }
        return iCount;
    }



int main() 
{
    int iLowerNum=0;
    int iHigherNum=0;
    int iResult=0;
    printf("enter lower number:");
    scanf("%d",&iLowerNum);
    printf("enter higher number:");
    scanf("%d",&iHigherNum);
    printf("Perfect numbers between %d and %d are:\n",iLowerNum,iHigherNum);
    iResult=countOfPerfect(iLowerNum,iHigherNum);
    printf("total count of perfect numbers is %d",iResult);
   

    return 0;
}