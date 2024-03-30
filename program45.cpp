#include<iostream>
using namespace std;

int Factorial(int iNo)
{
   int iFact = 1;
   int iCnt = 0;

   iCnt = 1;
   while(iCnt <= iNo)
   {
     iFact = iFact * iCnt;
     iCnt++;
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