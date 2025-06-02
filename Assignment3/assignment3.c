#include<stdio.h>

void DisplayFact(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
       if(((iNo % iCnt) == 0) && ((iCnt % 2 ) == 0))
       {
          printf("%d\t",iCnt);
       }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayFact(iValue);

    return 0;
}