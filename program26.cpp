#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

      if(iNo < 0) //Updator
   {
    iNo = -iNo;
   }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  //O(N)
    {
        if((iNo % iCnt) == 0)
        {
         iSum = iSum + iCnt;
        }
    }
    return iSum;
};

int main()
{
    int iValue = 0;
     int iRet = 0;

   cout<<"Enter number :"<<"\n";
   cin>>iValue;

    iRet= SumFactors(iValue);

    cout<<"Summation of factors is :"<<iRet<<"\n";

    return 0;
}