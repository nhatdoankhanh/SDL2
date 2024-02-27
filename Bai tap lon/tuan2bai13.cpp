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
    return check;
}

bool hoanHao(int n)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0) sum = sum + i + n / i;
    }
    if(n == int(sqrt(n)) * int(sqrt(n))) sum = sum - sqrt(n);
    return sum - n == n;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(nguyenTo(i)) cout << i << " ";
    }
    cout << endl;
    for(int i = 2; i <= n; i++){
        if(hoanHao(i)) cout << i << " ";
    }
    cout << endl;
    for(int i = 2; i <= n;i++)
    {
        if( i == int(sqrt(i)) * int(sqrt(i)) ) cout << i << " ";
    }
}

