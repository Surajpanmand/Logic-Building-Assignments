 #include<stdio.h>

int DollorToINR(int iNo)
{
    int iSum = 0;
    int iRup = 70;

    iSum = iNo * iRup;

    return iSum;

}
   

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);

    printf("%d",iRet);

    return 0;


}