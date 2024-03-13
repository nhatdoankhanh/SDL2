#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm tạo mảng ngẫu nhiên
void GenerateRandomArray(int arr[], int n) {
    srand(time(NULL)); // Sử dụng thời gian hiện tại làm hạt giống
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100 + 1; // Tạo số ngẫu nhiên từ 1 đến 100
    }
}

// Hàm in mảng ra màn hình
void PrintArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Thuật toán sắp xếp nổi bọt
void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main() {
    const int n = 30;
    int myArray[n];

    GenerateRandomArray(myArray,n);
    PrintArray(myArray, n);
    BubbleSort(myArray, n);
    PrintArray(myArray, n);

    return 0;
}

