#include<iostream>
using namespace std;

void DisplayB(int iNo)
{

   int iCnt =0;

   iCnt = iNo;
   while(iCnt >= 1)
   {
     printf("%d\t",iCnt);
     iCnt--;
    }
}


int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

     DisplayB(iValue);

    return 0;
}