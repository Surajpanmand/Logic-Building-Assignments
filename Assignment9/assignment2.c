#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool DisplayDigits(int iNo)
{
    int iDigits = 0;
 
    while(iNo != 0)
    {
        iDigits = iNo % 10;
        if(iDigits == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
        
        
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = DisplayDigits(iValue);

    if(bRet == TRUE)
    {
        printf("It Contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}