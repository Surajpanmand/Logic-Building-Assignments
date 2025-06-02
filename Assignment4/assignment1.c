 #include<stdio.h>

 int MultFact(int iNo)
 {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        iSum = iNo * iCnt;

    }
    return iSum;
 }

 int main()
 {

    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
 

 }