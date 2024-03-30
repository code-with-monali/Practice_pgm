//Input : 7
//Output : 7 6 5 4 3 2 1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
};

int main()
{
    int iFrequency = 0;

    cout<<"Enter the frequency of symbol"<<"\n";
    cin>>iFrequency;

    Display(iFrequency);

    return 0;
}