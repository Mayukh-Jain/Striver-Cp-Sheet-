#include <iostream>

int main() {
    int matrix[5][5];
    int r, c;
    
    // Input the 5x5 matrix and find the position of '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                r = i + 1; // row position of '1'
                c = j + 1; // column position of '1'
            }
        }
    }
    
    // Calculate the number of moves required to move '1' to the center (3,3)
    int moves = abs(r - 3) + abs(c - 3);
    std::cout << moves << std::endl;

    return 0;
}
