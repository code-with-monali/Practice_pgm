#include<iostream>
using namespace std;


unsigned long int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
   unsigned long int iResult = 1;

    if((iBase < 0) || (iPower < 0))
   {
    return 0;
   }
  
  for(iCnt = 1; iCnt <= iPower; iCnt++)
  {
    iResult = iResult * iBase;
}
  return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
   unsigned long int iRet = 0;

   cout<<"Enter base :"<<"\n";
   cin>>iValue1;
   cout<<"Enter power :"<<"\n";
   cin>>iValue2;

    iRet = CalculatePower(iValue1,iValue2);

   cout<<"Result is :"<<iRet<<"\n";

    return 0;
}