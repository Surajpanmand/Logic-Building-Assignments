 #include<stdio.h>

void  accept(int iNo)
{
    int  iCnt = 0;
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
      printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    accept(iValue);
    return 0;
}