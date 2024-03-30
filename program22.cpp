#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)  //O(N)
        {
        cout<<iCnt<<"\n";
        }   
    }
};

int main()
{
    int iValue = 0;

   cout<<"Enter number :"<<"\n";
   cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}