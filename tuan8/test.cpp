#include<bits/stdc++.h>

using namespace std;
int foo(string& s);
int main()
{
    string str = "Hello";
    foo(str);
    foo(&s);
    foo(s);
    foo("Hi");
    foo(&str);
}




