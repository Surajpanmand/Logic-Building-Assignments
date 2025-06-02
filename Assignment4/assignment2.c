 #include<stdio.h>
  
 void FactRev(int iNo)
 {
   int iCnt = 0;
    

   if(iNo < 0)
   {
     printf("Invalid");
   }
    
   for(iCnt = iNo;iCnt >= 1;iCnt-- )
   {
      if(iNo % iCnt==0)
      {
         printf("%d\n",iCnt);
      }
   }
 }

 int main()
 {
   int iValue = 0;

   printf("Enter Number\n");
   scanf("%d",&iValue);

   FactRev(iValue);

   return 0;
 }