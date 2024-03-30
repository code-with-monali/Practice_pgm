//Input : 7
//Output: A A A A A A A

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"A\t";
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