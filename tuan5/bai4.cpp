#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5] = {2,3,5,6,8};
    cout << a[-1]<< " " << a[5] << " " << a[6];

   // int arr[5] = {1,2,3,4,5,6};
   // cout << a[-1] << " " << a[5] << " " << a[6];
    cout << endl;
    int a1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }
}
