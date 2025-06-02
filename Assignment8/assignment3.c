 #include<stdio.h>

int KMtoMeter(int iNo)
{
    int iCal = 1000, iMeter = 0;
    {
        iMeter = iNo * iCal;
    }
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Kilometer : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Total Meter is %d\n",iRet);

    return 0;
}