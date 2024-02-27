#include<bits/stdc++.h>

using namespace std;

int main()
{
    double Min, Max, Step_size;
    cin >> Min >> Max >> Step_size;
    while(Min <= Max)
    {
        cout << setprecision(2) << fixed << Min << " " << (Min - 32) * 5 / 9 << " " << (Min - 32) * 5 / 9 + 273.15 << endl;
        Min = Min + Step_size;    }
}
