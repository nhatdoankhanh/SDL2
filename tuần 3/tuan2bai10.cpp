#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b <= c || a + c <= b || c + b <= a || a  <= 0 || b <= 0 || c <= 0) cout << "Invalid";
    else
    {
    cout << a + b + c << endl;
    if(a == b && a == c)
    {
        cout << "deu";
    }
    else
    {
        if(a == b || b == c || a == c) cout << "can";
        else
        {
            if(a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b) cout << "vuong";
            else cout << "thuong";
        }
    }
    }
}
