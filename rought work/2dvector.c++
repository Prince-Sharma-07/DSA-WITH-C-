#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> modifiedMatrix(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size();
        std::vector<std::vector<int>> answer(m);

        for (int i = 0; i < m; i++) {
            int max = 0; // Reset max for each row
            int n = matrix[i].size();
            
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -1) {
                    for (int k = 0; k <= j; k++) {
                        if (matrix[k][j] > max) {
                            max = matrix[k][j];
                        }
                    }
                    answer[i].push_back(max);
                } else {
                    answer[i].push_back(matrix[i][j]);
                }
            }
        }

        return answer;
    }
};

int main() {
    // Example usage
    std::vector<std::vector<int>> inputMatrix = {
        {1, 2, -1, 4},
        {5, -1, 7, 8},
        {9, 10, 11, 12}
    };

    Solution solution;
    std::vector<std::vector<int>> result = solution.modifiedMatrix(inputMatrix);

    // Display the result
    std::cout << "Original Matrix:\n";
    for (const auto& row : inputMatrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nModified Matrix:\n";
    for (const auto& row : result) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
