#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   
   for(i = 0;i < iRow;i++)
   {
         int iEven = 2, iOdd = 1;
       for(j = 0;j <= iCol;j++)
       {
         
           if((i % 2) == 0)
           {
               printf("%d\t",iEven);
               iEven = iEven + 2;
           }
           else
           {
               printf("%d\t",iOdd);
               iOdd = iOdd + 2;
           }
       }
       printf("\n");
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows :");
    scanf("%d",&iValue1);

    printf("Enter Coloum :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}