#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigits = 0;
    
    while(iNo != 0)
    {
        iDigits = iNo % 10;
        if(iDigits == 2)
        {
             
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
        
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    
    printf("%d",iRet);

    return 0;
}