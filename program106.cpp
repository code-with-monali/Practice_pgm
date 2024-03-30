//Input : 7
//Output : 2 4 6 8 10 12 14

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt*2<<"\t";
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
