#include<bits/stdc++.h>

using namespace std;

int** getMatrix(int m, int n)
{
    int** matrix = new int*[m];
    int** temp = matrix;
    while(temp < matrix + m)
    {
        *temp = new int[n];
        int* tempRow = *temp;
        while(tempRow < *temp + n)
        {
            cin >> *tempRow;
            tempRow++;
        }
        temp++;
    }
    return matrix;
}

void putNorm(int** matrix, int m, int n)
{
    int** temp = matrix;
    while(temp < matrix + m)
    {
        int *tempRow = *temp;
        while(tempRow < *temp + n)
        {
            cout << (*tempRow < 0 ? 0 : *tempRow) << " ";
            tempRow++;
        }
        cout << endl;
        temp++;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int** matrix = getMatrix(m, n);
    putNorm(matrix, m, n);
    return 0;
}
