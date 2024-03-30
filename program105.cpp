//Input : 7
//Output : a 1 b 2 c 3 d 4 e 5 f 6 g 7

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        cout<<ch<<"\t"<<iCnt<<"\t";
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