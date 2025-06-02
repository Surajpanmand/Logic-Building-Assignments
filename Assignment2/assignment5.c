#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkeven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("even");
    }
    return FALSE;
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",iValue);

    bRet = chkeven(bRet);


    return 0;
}