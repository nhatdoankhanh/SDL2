#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int* a = new int[n];
    int* b = new int[m];
    int i = 0, j = 0;
    for(int d = 0; d < n; d++)
    {
        int e;
        cin >> e;
        bool ch = true;
        for(int x = 0;  x < i; x++)
        {
            if(*(a + x) == e)
                ch = false;
        }
        if(ch == true)
        {
            *(a + i) = e;
            i++;
        }
    }
    for(int d = 0; d < m; d++)
    {
        int e;
        cin >> e;
        bool ch = true;
        for(int x = 0;  x < j; x++)
        {
            if(*(b + x) == e)
                ch = false;
        }
        if(ch == true)
        {
            *(b + j) = e;
            j++;
        }
    }

    sort(a, a + i);
    sort(b, b + j);
    int d1 = 0, d2 = 0, d3 = 0;
    int* c = new int[i];
    while(d1 < i && d2 < j)
    {
        if(*(a + d1) == *(b + d2))
        {
            d1++;
            d2++;
            *(c + d3) = *(a + d1 - 1);
            d3++;
        }
        else if(*(a + d1) < *(b + d2))
        {
            d1++;
        }
        else{
            d2++;
        }
    }
    for(int i = 0; i < d3; i++)
    {
        cout << *(c + i) << " ";
    }
    cout << endl;
    d1 = 0;
    d2 = 0;
    for(int x = 0; x < i; x++)
    {
        if(*(a + x) != *(c + d1))
           {
               cout << *(a + x) << " ";
           }
        else{
            d1++;
        }
    }
    cout << endl;
    for(int x = 0; x < j; x++)
    {
        if(*(b + x) != *(c + d2))
           {
               cout << *(b + x) << " ";
           }
        else{
            d2++;
        }
    }
}

