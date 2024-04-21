#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int* p = new int;
    p = &a;
    delete p;
    cout << a;
    //khong in ra man hinh duoc gia tri cua a
    //khi gan p = &a thi bo nho ma p tro toi o tren stack nen delete khong hop le
}
