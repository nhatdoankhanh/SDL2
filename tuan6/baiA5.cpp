#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n = 5;
  int& r = n;
  cout << &n << " " << &r << endl;
  //co cung dia chi bo nho
 // int& a;
  //ko the khai bao 1 bien tham chieu ma ko chieu den 1 bien thuong duoc
  int c;
  r = c;
  cout << &r << " " << &c << r << " " << c;
  // co
}
