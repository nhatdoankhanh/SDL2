#include<bits/stdc++.h>

using namespace std;

void f1(int a[]) {
    cout<< sizeof(a)<< endl;
}
void f2(int a[5]) {
    cout<< sizeof(a)<< endl;
}

int main() {
    int A[5] = {4, 5, 6, 7 ,8};
    cout<< sizeof(A)<< endl;

    f1(A);
    f2(A);

    cout<< &A[0]<< endl;
    return 0;
}
