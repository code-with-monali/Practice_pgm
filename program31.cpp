#include<iostream>
using namespace std;


bool CheckPrime(int iNo)
{
    int iCnt = 0;
  
  for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      break;
    }
}
  if(iCnt == (iNo/2)+1)
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

    bRet= CheckPrime(iValue);

  if(bRet == true)
    {
       cout<<iValue<<"is  prime number\n";
    }
    else
    {
     cout<<iValue<<"is not a prime number\n";

    }

       return 0;
}