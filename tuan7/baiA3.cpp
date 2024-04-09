#include<bits/stdc++.h>

using namespace std;

int count_even(int* A, int n)
{
    int d = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i]% 2 == 0) d++;
    }
    return d;
}

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Size = sizeof(A) / sizeof(A[0]);
    cout << count_even(A, 5) << endl;
    cout << count_even(A + Size - 5, 5) << endl;


}
