#include <iostream>
#include <vector>

std::vector<std::vector<int>> generateMatrix(int n, int m) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m, 0));
    int val = 1;
    for (int i = 0; i < n + m - 1; ++i) {
        int start_col = std::max(0, i - n + 1);
        int count = std::min(i, std::min((m - start_col), n));
        for (int j = 0; j < count; ++j) {
            matrix[std::min(n, i) - j - 1][start_col + j] = val++;
        }
    }
    return matrix;
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 3, m = 4;
    auto matrix = generateMatrix(n, m);
    printMatrix(matrix);
    return 0;
}

