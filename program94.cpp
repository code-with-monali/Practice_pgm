//Input : 7
//Output : # # # # # # #

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

  for(iCnt =1; iCnt <= iNo; iCnt++)
  {
    cout<<"#\t";
  }
  cout<<"\n";
};

int main()
{
    int iFrequency = 0;

    cout<<"Enter the frequency of symbols"<<"\n";
    cin>>iFrequency;

    Display(iFrequency);

    return 0;

}