//Input : 5
//Output : 1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
} 

int main()
{
    int iFrequency = 0;

    cout<<"Enter the frequency of symbol :"<<"\n";
    cin>>iFrequency;

    Display(iFrequency);

    return 0;
}