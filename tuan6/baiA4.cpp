#include<bits/stdc++.h>

using namespace std;

string add(string s)
{
    return s = s + s;
}

char* change(char arr[])
{
    arr[0] = '1';
    return arr;
}

int main()
{
    string s = "adsad";
    char arr[] = "adsad";
    add(s);
    change(arr);
    cout << s << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}
