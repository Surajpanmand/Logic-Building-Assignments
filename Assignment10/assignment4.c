#include<stdio.h>

int MultDigits(int iNo)
{
   int iDigit = 1;
   
   while(iNo != 0)
   {
    iDigit = iDigit * (iNo % 10);
    iNo = iNo / 10;
   }
   return iDigit;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    
    printf("%d",iRet);

    return 0;
}