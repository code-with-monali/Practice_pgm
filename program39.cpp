#include<iostream>
using namespace std;


int Factorial(int iNo)
{
   int iFact = 0; 
   int iCnt =0;

   for(iCnt =1; iCnt <= iNo; iCnt++)
   {
    iFact = iFact * iCnt;
   }
   return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}