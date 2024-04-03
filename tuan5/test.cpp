#include<bits/stdc++.h>

using namespace std;

 bool soSanh(string s1, string s2)
 {
     bool ch = true;
     if(int(s1.length()) < int(s2.length())) ch = true;
     else
     {
         if(int(s1.length()) > int(s2.length())) ch =false;
             else
            {
                 for(int i = 0; i < int(s1.length()); i++)
                 {
                     if(int(s1[i]) > int(s2[i]))
                         ch = false;
                 }
            }
     }
     return ch;
 }

vector<string> bigSorting(vector<string> unsorted) {
   sort(unsorted.begin(), unsorted.end(), soSanh);
   return unsorted;
}
int main()
{
    int n;
    cin >> n;
    vector<string> arr;
    for(int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        arr.push_back(s1);
    }
    vector<string> arr1 = bigSorting(arr);
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i] << endl;
    }

    return 0;
}
