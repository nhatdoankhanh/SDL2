#include<bits/stdc++.h>

using namespace std;

char* concat(const char* a, const char* b)
{
    char* v = new char[strlen(a) + strlen(b)];
    for(int i = 0; i < strlen(a); i++)
    {
        *(v + i) = *(a + i);
    }
    for(int i = 0; i < strlen(b); i++)
    {
        *(v + i + strlen(a)) = *(b + i);
    }
    *(v + strlen(a) + strlen(b)) = '\0';
    return v;
}

int main()
{
    const char* a = "hello";
    const char* b = "world";
    char* c = concat(a, b);
    for(int i = 0; i < strlen(c); i++)
    {
        cout << *(c + i);
    }
}
