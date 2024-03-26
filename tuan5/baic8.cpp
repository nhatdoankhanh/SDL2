#include <iostream>

using namespace std;

char upper(char a)
{
    if(int(a) >= 97 && int(a) <= 122)
        a = char(int(a) - 32);
    return a;
}

char lower(char a)
{
    if(int(a) <= 90 && int(a) >= 65)
        a = char(int(a) + 32);
    return a;
}
 int length(char s[])
 {
     int d = 0;
     while(s[d] != '\0')
        d++;
     return d - 1;
 }
 void chuanHoa(char  s[])
 {
     int i = 0;
     int n = length(s);
     while(i < n)
     {
         int d = 0;
         if(s[i] == ' '){
             while(i+ d < n && s[i+d] == ' ')
                d++;
         }
         for(int j = i; j < n - d; j++)
         {
             s[j] = s[j + d];
         }
         n = n - d;
         s[i] = upper(s[i]);
         i++;
         while(i < n && s[i] != ' ')
         {
            s[i] = lower(s[i]);
            i++;
         }
         i++;
     }
     s[i] = '.';

 }

int main()
{
    char s[] = {"   Nhat dfs        dsdsa"};
    chuanHoa(s);
    int d = 0;
    while(s[d + 1] != '.'){
        cout << s[d];
        d++;
    }
    return 0;

}
