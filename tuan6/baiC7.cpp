
#include <iostream>
using namespace std;

void printTriangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int num_rows;
    cin >> num_rows;
    printTriangle(num_rows);
    return 0;
}
