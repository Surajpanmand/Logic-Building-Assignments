 #include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum = 0, iAdd = 0, iSub = 0;
     
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
         
        if((iNo % iCnt)==0)
        {
            iAdd = iCnt + iAdd;
        }
        else if((iNo % iCnt)!=0)
        {
           iSub = iCnt + iSub;

           iSum = iAdd - iSub;
        }
     
    }
    return iSum;
    
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}