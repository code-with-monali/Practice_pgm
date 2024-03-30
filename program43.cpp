#include<iostream>
using namespace std;

void DisplayF(int iNo)
{

   int iCnt =0;

   iCnt = 1;

   while(iCnt <= iNo)
   {
     printf("%d\t",iCnt);
     iCnt++;
    }
}


int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

     DisplayF(iValue);

    return 0;
}