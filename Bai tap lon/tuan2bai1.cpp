#include<bits/stdc++.h>
using namespace std;

bool nguyenTo(int n)
{
    bool check = true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            check = false;
            break;
        }
    }
    if(n == 1) check = false;
    return check;
}

int main()
{
    int n;
    cin >> n;
    if(nguyenTo(n)) cout << "yes";
    else cout << "no";
}
