//Input : 7
//Output: a a a a a a a

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"a\t";
    }
    cout<<"\n";
}

int main()
{
    int iFrequency = 0;

   cout<<"Enter number of frequency :"<<"\n";
   cin>>iFrequency;

   Display(iFrequency);

   return 0;
}