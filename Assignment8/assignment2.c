 #include<stdio.h>

double RectArea(float fWidth, float fHeigth)
{
    double dArea = 0;
    {
       dArea = fWidth * fHeigth;
    }
    return dArea;
}

int main()
{
    double dRet = 0;
    float fValue1 = 0, fValue2 = 0;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Heigth :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Width and Heigth of Rectangle is : %f",dRet);

    return 0;

}