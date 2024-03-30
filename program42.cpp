#include<iostream>
using namespace std;

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
   ULONG iFact = 1; 
   int iCnt =0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   for(iCnt =iNo; iCnt >= 1; iCnt--)
   {
    iFact = iFact * iCnt;
   }
   return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}