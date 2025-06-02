 #include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEve = 0, iSum = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt == 0)  
        {
            printf("%d\n",iCnt);
           iSum = iSum * iCnt; 
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

    iRet = EvenFactorial(iValue);

    printf("%d",iRet);

    return 0 ;
}