#include<iostream>
using namespace std;


void DisplayF(int iNo)
{
   int iCnt =0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    cout<<iCnt<<"\t";
   }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DisplayF(iValue);

    return 0;
}