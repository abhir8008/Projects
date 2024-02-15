#include<iostream>
using namespace std;

int main() {
  int n;
  bool flag = true; // true means flag
  cout << "enter a number: ";
  cin >> n;

  for (int i = 2; i <= n/2; i++) 
  {
    //   if (n%i==0)
    //   {
    //     cout << "number is composite";
    //     break;
    //   }
    //     else{cout<<"number is prime";
    //         break;}
    if (n % i == 0) 
    {
      flag = false;
      //cout<< flag<<'\n';
      break;
    }
  }
  if(n == 1) {cout << "Neither prime nor composite";}

  else if (flag == true) {cout << "prime";}

  else { cout << "composite"; }
}
