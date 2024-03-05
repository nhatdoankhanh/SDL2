#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a = 1;
    cin >> n;
    vector<int> ar;
    ar.push_back(n);
    while(n >= 0)
    {
        cin >> n;
        ar.push_back(n);
        a++;
    }
    int d = 0;
    while(d < a)
    {
        int count = 1;
        while(count + d < a && ar[d] == ar[d+count])
        {
            count = count + 1;
        }
        cout << ar[d] << " ";
        d = d + count;
    }
}
