#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0',ch2 = '\0'; 

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1, ch1 = 'A', ch2 = 'a';j <= iCol;j++, ch1++, ch2++)
        {
            if(i % 2 !=0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%C\t",ch2);
            }
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