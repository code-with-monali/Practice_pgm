//Input : 7
//Output: A B C D E F G

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<ch<<"\t";
        ch++;
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