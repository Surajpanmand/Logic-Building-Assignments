 #include<stdio.h>

double SquareMeter(int iNo)
{
    double dTotal = 0, dMeter = 0.0929;
    {
        dTotal = dMeter * iNo;
    }
    return dTotal;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meter is : %f",dRet);

    return 0;
}