#include<iostream>
using namespace std;


int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    long int iResult = 1;
  
  for(iCnt = 1; iCnt <= iPower; iCnt++)
  {
    iResult = iResult * iBase;
}
  return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
     long int iRet = 0;

   cout<<"Enter base :"<<"\n";
   cin>>iValue1;
   cout<<"Enter power :"<<"\n";
   cin>>iValue2;

    iRet = CalculatePower(iValue1,iValue2);

   cout<<"Result is :"<<iRet<<"\n";

    return 0;
}