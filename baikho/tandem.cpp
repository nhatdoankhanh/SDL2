#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> k >> n;
    string s;
    cin >> s;
    vector<pair<int, int>> arr;
    int num1, num2;
    for(int i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
        arr.push_back({num1, num2});
    }

    for(int i = 0; i < n; i++)
    {
        int d = 1;
        int a = arr[i].first - 1;
        int b = arr[i].second - 1;
        int c = b - a + 1;
        int e = c;
        a = a + c;
        b = b + c;
        bool ch = true;
        while(ch == true && b < k)
        {

            for(int i = a; i <=  b; i++)
            {
                if(s[i] != s[i - c])
                {
                    ch = false;
                }
            }
            c = c + e;
            a = a + e;
            b = b + e;
            if(ch == true) d++;
        }
        cout << d << endl;
    }
}
