#include<iostream>
using namespace std;


bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

  for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
        iSum = iSum + iCnt;
    }
        if(iSum > iNo)
    {
    break;
  } 
  }
  if(iSum == iNo)
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