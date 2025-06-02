 #include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float area = 0;
    {
        area = PI * fRadius * fRadius;
    }
    return area;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("area of circle is : %f",dRet);

    return 0;

    
}