#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d #\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Element :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}