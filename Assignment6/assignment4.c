 #include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iSum = 0, iTab = 10;
     
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iTab;iCnt++)
    {
       iSum = iNo * iCnt;

       printf("%d\n",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}