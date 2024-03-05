#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    if(n == 1) cout << "Thuoc day Fibonacci\n" << "1 1";
    else
    {   a.push_back(1);
        a.push_back(1);
        int d = 1;
        while(a[d] < n)
        {
            d++;
            a.push_back(a[d-1] + a[d-2]);
        }
        if(a[d] == n){
            cout << "Thuoc day Fibonacci" << endl;
             for(int i = 0; i <= d; i++)
            {
                cout << a[i] << " ";
            }
        }
        else {cout << "Khong thuoc day Fibonacci\n";
         for(int i = 0; i < d; i++)
            {
                cout << a[i] << " ";
            }
        }
    }
}
