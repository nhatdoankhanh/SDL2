#include<bits/stdc++.h>

using namespace std;

vector<string> arr;
void input()
{
   string s;
   while(cin >> s && s != ".")
   {
       arr.push_back(s);
   }
}
string random(){
        srand(time(0));
        int x = rand() % (arr.size());
        return arr[x];
}
int main()
{
    input();
    string s = random();
    bool check = false;
    int step = 10, d = 0;
    int n = int(s.length());
    string s1;
    for(int i = 0; i < n; i++)
    {
        s1 = s1 + "-";
    }
    while(check == false && step >= 1)
    {
        char a;
        cin >> a;
        int ch1 = false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == a)
            {
                d++;
                s1[i] = a;
                s[i] = '.';
                ch1 = true;
                break;
            }
        }
        if(ch1 == false) step--;
        cout << s1 << " "<< step;
        if(d == n)
        {
            check = true;
        }

    }
    cout << endl;
    if(check == true) cout << "you win";
    else cout << "you lose";

}
