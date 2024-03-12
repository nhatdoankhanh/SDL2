#include<bits/stdc++.h>

using namespace std;

struct String{
   int n;
   char *str;
   String(const char* ss)
   {
       n = strlen(ss);
       str = new char[n+1];
       strcpy(str,ss);
   }
   void Destructer()
   {
       delete[] str;
   }
   void print()
   {
       cout << str;
   }
   void append(const char* s)
   {
       int a = strlen(s);
       char* temp = new char[n + a + 1];
       strcpy(temp, str);
       strcat(temp, s);
       delete[] str;
       str = temp;
       n += a;
   }

};

int main()
{
    String s("Hi");
    s.append("You");
    s.print();
}
