#include<bits/stdc++.h>

using namespace std;

int main()
{   int a, b;
    cout << &a << " " << &b << endl;
    int arr1[5];
    char arr2[5];
    for(int i = 0; i < 3; i++)
    {
        cout << (void*)&arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        cout <<(void*)&arr2[i] << " ";
    }
    cout << endl;
    //may dia chi do rat gan nhau
    int c, d;
    cout << &c << " " << &d << endl;
    //dia chi bo nho theo thu tu tu cao den thap
}
