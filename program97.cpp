//Input : 7
//Output : 1 2 3 4 5 6 7

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
      cout<<iCnt<<"\t";
    }
    cout<<"\n";
};

int main()
{
    int iFrequency = 0;

    cout<<"Enter the frequency of symbol :"<<"\n";
    cin>>iFrequency;

    Display(iFrequency);

    return 0;
}