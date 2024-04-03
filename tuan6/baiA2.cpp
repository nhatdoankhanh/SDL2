#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if( n == 1) return 1;
    cout << "n = " << n << " at " << &n << endl;
    return n * factorial(n-1);
}

int main()
{
   int a;
   cin >> a;
    cout << factorial(a);
    //24 bit
}
