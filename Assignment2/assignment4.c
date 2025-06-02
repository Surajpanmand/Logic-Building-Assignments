 #include<stdio.h>
int display(int iNo, int iFrequency)
{
    int i = 0;
    for(iNo >= 0; iNo <= iFrequency; iNo++)
    {
        printf("%dino",&iFrequency);
    }
} 

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

   display(iValue, iCount);
    return 0;
}