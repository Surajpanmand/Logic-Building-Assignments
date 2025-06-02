#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum = 0, iEven = 0, iOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)  
        {
            iEven = iDigit + iEven;
        }
        else if((iDigit % 2) != 0)
        {
            iOdd = iDigit + iOdd;
        }
        iSum = iEven - iOdd;
        iNo = iNo / 10;
    }
    return iSum;
     
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}