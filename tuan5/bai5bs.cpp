#include<bits/stdc++.h>

using namespace std;

struct sinhVien
{
    string ten;
    double toan, ly, anh, tb;
};

bool Ly(sinhVien a, sinhVien b)
{
    return a.ly > b. ly;
}
bool Toan(sinhVien a, sinhVien b)
{
    return a.toan > b. toan;
}
bool Tb(sinhVien a, sinhVien b)
{
    return a.tb > b.tb;
}

int main()
{
    int n;
    cin >> n;
    sinhVien a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].ten >> a[i].toan >> a[i].ly >> a[i].anh;
        a[i].tb = (a[i].toan + a[i].anh + a[i].ly) / 3;
    }
    sort(a, a + n, Ly);
    cout << "sap xep theo diem ly la" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i].ten << " " << a[i].toan << " " << a[i].ly << " " << a[i].anh << endl;
    }
    sort(a, a + n, Toan);
    cout << "sap xep theo diem Toan la" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i].ten << " " << a[i].toan << " " << a[i].ly << " " << a[i].anh << endl;
    }
    sort(a, a + n, Tb);
    cout << "sap xep theo diem tb la" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i].ten << " " << a[i].toan << " " << a[i].ly << " " << a[i].anh << endl;
    }


}
