#include<iostream>
using namespace std;

int main()
{
  int n, count;
  cout<< "Enter the number: ";
  cin >> n;


  for(count=0; n>0; count++)
    {
      n=n/10;
      //cout<< count;
    }
    cout<< count;

}
