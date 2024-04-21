#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(int i = 0; i < 900; i = i+20)
    {
        for(int j = 0; j < 700; j = j+20)
        {
            cout << "{" << i << ", " << j << ", 20, 20},";
        }
        cout << endl;
    }
}
