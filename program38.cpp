#include<iostream>
using namespace std;


void DisplayB(int iNo)
{
   int iCnt =0;

   for(iCnt =iNo; iCnt >= 1; iCnt--)
   {
    cout<<iCnt<<"\t";
   }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DisplayB(iValue);

    return 0;
}