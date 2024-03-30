//Input : 7
//Output: A B C D E F G 

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        cout<<ch<<"\t";
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