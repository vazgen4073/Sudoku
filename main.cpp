#include "sudoku.h"
#include <iostream>
int main()
{

    int N = 9;
    int** grid;
    grid = new int*[N];
    for (int i = 0; i < N; i++) {
        grid[i] = new int[N];
    }

    std::cout << " Enter numbers (in an empty place insert 0) \n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> grid[i][j];
        }
    }

    Sudoku sud;
    sud.enterDigits(grid);

    if (sud.Solve(0, 0)) {
        std::cout << "Solved! \n";
        sud.Print();
    } else
        std::cout << "Is not solved\n";

    for (int i = 0; i < N; i++) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}
