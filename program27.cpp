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

bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);
    if(iResult == iNumber)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
     int bRet = false;

   cout<<"Enter number :"<<"\n";
   cin>>iValue;

    bRet= CheckPerfect(iValue);

    if(bRet == true)
    {
       cout<<iValue<<"is not perfect number\n";
    }
    else
    {
     cout<<iValue<<"is a perfect number\n";

    }

       return 0;
}