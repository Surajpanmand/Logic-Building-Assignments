#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol, iCnt = j; j >= 1; j--, iCnt--)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Coloum : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}